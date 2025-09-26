#include <stdio.h>

int main(void) {
    int shape,choice;
    double r,l,w,b,h,area,perimeter;
    const double PI = 3.14;
    printf("Select Shape:\n1. Circle\n2. Rectangle\n3. Triangle\n");
    scanf("%d", &shape);
    switch (shape) {
        case 1:
            printf("1. Area\n2. Perimeter\n");
            scanf("%d",&choice);
            printf("Enter radius: ");
            scanf("%lf",&r);
            if(choice == 1){
                area= PI*r*r;
                printf("Area of Circle = %.2lf\n",area);
            } else if (choice == 2) {
                perimeter=2*PI*r;
                printf("Perimeter of Circle = %.2lf\n",perimeter);
            } else {
                printf("Invalid choice\n");
            }
            break;

        case 2:
            printf("1. Area\n2. Perimeter\n");
            scanf("%d", &choice);
            printf("Enter length and width: ");
            scanf("%lf %lf",&l,&w);
            if (choice == 1) {
                area=l*w;
                printf("Area of Rectangle = %.2lf\n",area);
            } else if (choice == 2) {
                perimeter=2*(l+w);
                printf("Perimeter of Rectangle = %.2lf\n",perimeter);
            } else {
                printf("Invalid choice\n");
            }
            break;

        case 3:
            printf("1. Area\n2. Perimeter\n");
            scanf("%d",&choice);
            if (choice == 1) {
                printf("Enter base and height: ");
                scanf("%lf %lf",&b,&h);
                area=0.5*b*h;
                printf("Area of Triangle= %.2lf\n",area);
            } else if (choice == 2) {
                double s1,s2,s3;
                printf("Enter three sides: ");
                scanf("%lf %lf %lf",&s1,&s2,&s3);
                perimeter=s1+s2+s3;
                printf("Perimeter of Triangle = %.2lf\n",perimeter);
            } else {
                printf("Invalid choice\n");
            }
            break;
       default:
            printf("Invalid shape\n");
    }
    return 0;
} 

