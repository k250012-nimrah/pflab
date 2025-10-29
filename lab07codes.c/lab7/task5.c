#include<stdio.h>
int main(){
    int sensor1[100], sensor2[100], merged[200];
    int size1, size2;
    printf("Enter the number of readings for sensor 1: ");
    scanf("%d", &size1);
    printf("Enter %d readings for sensor 1:\n", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &sensor1[i]);
    }
    printf("Enter the number of readings for sensor 2: ");
    scanf("%d", &size2);
    printf("Enter %d readings for sensor 2:\n", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &sensor2[i]);
    }
    printf("Sensor 1 readings: [");
    for (int i = 0; i < size1; i++) {
        printf("%d", sensor1[i]);
        if (i < size1 - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    printf("Sensor 2 readings: [");
    for (int i = 0; i < size2; i++) {
        printf("%d", sensor2[i]);
        if (i < size2 - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    int totalSize = size1 + size2;
    for (int i = 0; i < size1; i++) {
        merged[i] = sensor1[i];
    }
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = sensor2[i];
    }
    printf("Merged readings: [");
    for (int i = 0; i < totalSize; i++) {
        printf("%d", merged[i]);
        if (i < totalSize - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    printf("Total readings: %d\n", totalSize);
    return 0;
}