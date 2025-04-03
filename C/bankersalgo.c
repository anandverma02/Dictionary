#include <stdio.h>
#define MAX_PROCESSES 5
#define MAX_RESOURCES 3
int main() {
    int i, j, k;
    int available[MAX_RESOURCES] = {3, 3, 2}; // Example available resources
    int max[MAX_PROCESSES][MAX_RESOURCES] = {
        {7, 5, 3},
        {3, 2, 2},
        {9, 0, 2},
        {2, 2, 2},
        {4, 3, 3}
    }; // Maximum demand of each process
    int allocation[MAX_PROCESSES][MAX_RESOURCES] = {
        {0, 1, 0},
        {2, 0, 0},
        {3, 0, 2},
        {2, 1, 1},
        {0, 0, 2}
    }; // Resources currently allocated to each process
    int need[MAX_PROCESSES][MAX_RESOURCES];
    int finish[MAX_PROCESSES] = {0}; // To track finished processes
    int safeSequence[MAX_PROCESSES];
    int work[MAX_RESOURCES];
    // Calculate the need matrix
    for (i = 0; i < MAX_PROCESSES; i++) {
        for (j = 0; j < MAX_RESOURCES; j++) {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }
    // Copy available resources to work array
    for (i = 0; i < MAX_RESOURCES; i++) {
        work[i] = available[i];
    }
    int count = 0;
    while (count < MAX_PROCESSES) {
        int found = 0;
        for (i = 0; i < MAX_PROCESSES; i++) {
            if (finish[i] == 0) {
                for (j = 0; j < MAX_RESOURCES; j++) {
                    if (need[i][j] > work[j]) {
                        break;
                    }
                }
                if (j == MAX_RESOURCES) {
                    for (k = 0; k < MAX_RESOURCES; k++) {
                        work[k] += allocation[i][k];
                    }
                    safeSequence[count++] = i;
                    finish[i] = 1;
                    found = 1;
                }
            }
        }
        if (found == 0) {
            printf("The system is not in a safe state.\n");
            return 0;
        }
    }
    printf("The system is in a safe state.\nSafe sequence is: ");
    for (i = 0; i < MAX_PROCESSES; i++) {
        printf("%d ", safeSequence[i]);
    }
    printf(" Name-Anand Verma , Reg no.-22154149016");
    printf("\n");
    return 0;
}
