#include<stdio.h>
int main(){
    int arr[100];
    int size, target;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Original array: [");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    printf("Enter the value to be deleted in the array: ");
    scanf("%d", &target);
    if (size == 0) {
        printf("Array is empty\n");
    }
    int newSize = 0;   
    for (int i = 0; i < size; i++) {
        if (arr[i] != target) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    size = newSize;
    printf("Array after deleting all occurrences of %d: ", target);
    if (size == 0) {
        printf("Array is empty\n");
    } else {
        printf("[");
        for (int i = 0; i < size; i++) {
            printf("%d", arr[i]);
            if (i < size - 1) {
                printf(", ");
            }
        }
        printf("]\n");
    }
    printf("New size: %d\n", size);
    return 0;
}