#include <stdio.h>
int main() {
    int n, i, j, time = 0, remaining = 0, smallest = 0;
    int bt[10], p[10], wt[10], tat[10], rt[10];

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter burst time for each process: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
        p[i] = i + 1; 
        rt[i] = bt[i];
    }
    remaining = n;
    while (remaining != 0) {
        smallest = 0;
        for (i = 0; i < n; i++) {
            if (rt[i] < rt[smallest] && rt[i] > 0) {
                smallest = i;
            }
        }
        rt[smallest]--;
        time++;

        if (rt[smallest] == 0) {
            remaining--;
            wt[smallest] = time - bt[smallest];
            tat[smallest] = time;
        }
    }
    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\n", p[i], bt[i], wt[i], tat[i]);
    }
    return 0;
}