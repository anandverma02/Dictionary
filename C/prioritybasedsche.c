#include <stdio.h>
int main() {
    int n, i, j, time = 0, remaining = 0, highest_priority = 0;
    int bt[10], p[10], wt[10], tat[10], priority[10];

    printf("Enter the number of processes: ");
    scanf("%d", &n);
    printf("Enter burst time and priority for each process:\n");
    for (i = 0; i < n; i++) {
        scanf("%d %d", &bt[i], &priority[i]);
        p[i] = i + 1; // Assign process IDs
    }
    remaining = n;
    while (remaining != 0) {
        highest_priority = 0;
        for (i = 0; i < n; i++) {
            if (priority[i] > priority[highest_priority] && bt[i] > 0) {
                highest_priority = i;
            }
        }
        bt[highest_priority]--;
        time++;
        if (bt[highest_priority] == 0) {
            remaining--;
            wt[highest_priority] = time - bt[highest_priority];
            tat[highest_priority] = time;
        }
    }
    printf("\nProcess\tBurst Time\tPriority\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", p[i], bt[i], priority[i], wt[i], tat[i]);
    }
    return 0;
}