#include<stdio.h>
int main(){
    char str1[100], str2[100];
    int isEqual = 1; // Assume strings are equal initially
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            isEqual = 0; 
            break;
        }
        i++;
    }
    if (str1[i] != str2[i]) {
        isEqual = 0;
    }
    if (isEqual) {
        printf("Result: Strings are EQUAL\n");
    } else {
        printf("Result: Strings are NOT EQUAL\n");
    }
    return 0;
}