#include <stdio.h>
int main(){
    const int HOURS_IN_DAY =24;
    float powerUsage[HOURS_IN_DAY];
    printf("Enter power usage (in watts) for each hour of the day:\n");
    for (int i = 0; i < HOURS_IN_DAY; i++){
        printf("Hour %d: ", i + 1);
        scanf("%f", &powerUsage[i]);
    }
    float totalUsage = 0.0;
    for(int i = 0; i < HOURS_IN_DAY; i++){
        totalUsage += powerUsage[i];
    }
    float averageUsage = totalUsage / HOURS_IN_DAY;
    printf("\n--- Power Usage Report ---\n");
    printf("Total usage for the day: %.2f watts\n", totalUsage);
    printf("Average usage per hour: %.2f watts\n", averageUsage);
    return 0;
}