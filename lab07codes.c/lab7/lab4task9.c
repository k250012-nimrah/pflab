#include <stdio.h>
int main() {
    int dept, course;
    printf("Select Department:\n1. CS\n2. EE\n3. BBA\n");
    scanf("%d",&dept);
    switch (dept) {
        case 1:
            printf("CS Courses:\n1. Programming\n2. Data Structures\n3. DBMS\n");
            scanf("%d",&course);
            switch (course) {
                case 1:
                 printf("You selected Programming\n");
                break;
                case 2:
                 printf("You selected Data Structures\n"); 
                 break;
                case 3:
                 printf("You selected DBMS\n"); 
                 break;
                default:
                 printf("Invalid Course\n");
            }
            break;
        case 2:
            printf("EE Courses:\n1. Circuits\n2. Electronics\n3. Power Systems\n");
            scanf("%d",&course);
            switch (course) {
                case 1:
                 printf("You selected Circuits\n"); 
                 break;
                case 2:
                 printf("You selected Electronics\n"); 
                 break;
                case 3:
                 printf("You selected Power Systems\n"); 
                 break;
                default:
                 printf("Invalid Course\n");
            }
            break;
        case 3:
            printf("BBA Courses:\n1. Marketing\n2. Finance\n3. Management\n");
            scanf("%d", &course);
            switch (course) {
                case 1:
                 printf("You selected Marketing\n");
                  break;
                case 2:
                 printf("You selected Finance\n"); 
                 break;
                case 3:
                 printf("You selected Management\n"); 
                 break;
                default: 
                printf("Invalid Course\n");
            }
            break;
        default: 
        printf("Invalid Department\n");
    }
    return 0;
}
