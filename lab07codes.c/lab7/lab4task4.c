#include<stdio.h>
int main(){
    int category, item;

    printf("Welcome to Online Food Ordering System\n");
    printf("Select a Category:\n");
    printf("1. Fast Food\n");
    printf("2. Drinks\n");
    printf("Enter your choice: ");
    scanf("%d", &category);

    switch (category) {
        case 1: // Fast Food
            printf("\nYou selected Fast Food.\n");
            printf("Choose an item:\n");
            printf("1. Burger\n");
            printf("2. Pizza\n");
            printf("3. Sandwich\n");
            printf("Enter your choice: ");
            scanf("%d", &item);

            switch (item) {
                case 1:
                    printf("\nYou ordered a Burger. Thank you!\n");
                    break;
                case 2:
                    printf("\nYou ordered a Pizza. Thank you!\n");
                    break;
                case 3:
                    printf("\nYou ordered a Sandwich. Thank you!\n");
                    break;
                default:
                    printf("\nInvalid Fast Food choice.\n");
            }
            break;

        case 2: // Drinks
            printf("\nYou selected Drinks.\n");
            printf("Choose an item:\n");
            printf("1. Coke\n");
            printf("2. Coffee\n");
            printf("3. Juice\n");
            printf("Enter your choice: ");
            scanf("%d", &item);

            switch (item) {
                case 1:
                    printf("\nYou ordered a Coke. Thank you!\n");
                    break;
                case 2:
                    printf("\nYou ordered a Coffee. Thank you!\n");
                    break;
                case 3:
                    printf("\nYou ordered a Juice. Thank you!\n");
                    break;
                default:
                    printf("\nInvalid Drink choice.\n");
            }
            break;

        default:
            printf("\nInvalid Category.\n");
    }

    return 0;
}
