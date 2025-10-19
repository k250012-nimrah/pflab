#include <stdio.h>
#include <math.h>
int main() {
    float principal,rate,time,emi;
    int type;
    printf("Enter Loan Amount: ");
    scanf("%f",&principal);
    printf("Enter Time in years: ");
    scanf("%f",&time);
    printf("Interest Type (1 = Simple, 2 = Compound): ");
    scanf("%d",&type);
    if (type == 1) {
        printf("Enter annual interest rate: ");
        scanf("%f",&rate);
        float si=(principal*rate*time)/100.0f;
        emi=(principal+si)/(time*12.0f);
        printf("EMI(Simple Interest)=%.2f\n",emi);
    } else if (type == 2) {
        printf("Enter annual interest rate: ");
        scanf("%f",&rate);
        float amount=principal*powf((1.0f+rate/100.0f),time);
        emi=amount/(time*12.0f);
        printf("EMI(Compound Interest)=%.2f\n",emi);
    } else {
        printf("Invalid Interest Type\n");
    }
    return 0;
}
