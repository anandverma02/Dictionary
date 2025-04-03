#include <stdio.h>

#define P 5 // Number of processes
#define R 3 // Number of resources

int main() {
    int available[R] = {3, 3, 2};
    int max[P][R] = {{7, 5, 3}, {3, 2, 2}, {9, 0, 2}, {2, 2, 2}, {4, 3, 3}};
    int allocation[P][R] = {{0, 1, 0}, {2, 0, 0}, {3, 0, 2}, {2, 1, 1}, {0, 0, 2}};
    int need[P][R], work[R], finish[P] = {0};

    // Calculate need matrix
    for (int i = 0; i < P; i++)
        for (int j = 0; j < R; j++)
            need[i][j] = max[i][j] - allocation[i][j];

    // Initialize work with available resources
    for (int i = 0; i < R; i++)
        work[i] = available[i];

    int count = 0;
    while (count < P) {
        int found = 0;
        for (int i = 0; i < P; i++) {
            if (!finish[i]) {
                int j;
                for (j = 0; j < R; j++)
                    if (need[i][j] > work[j])
                        break;
                if (j == R) {
                    for (int k = 0; k < R; k++)
                        work[k] += allocation[i][k];
                    finish[i] = 1;
                    found = 1;
                    count++;
                }
            }
        }
        if (!found) {
            printf("Request denied to prevent deadlock\n");
            return 0;
        }
    }
    printf("Request granted. System is in safe state\n");
    return 0;
}
