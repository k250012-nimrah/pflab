#include <stdio.h>

int main() {
    int pin,sum=0,temp;
    printf("Enter a 4-digit PIN: ");
    scanf("%d", &pin);
    temp=pin;
    while(temp > 0) {
        sum+=temp % 10;
        temp/=10;
    }
    if(sum>10){
        printf("Strong PIN (sum = %d)\n",sum);
    } else{
        printf("Weak PIN (sum = %d)\n",sum);
    }
    return 0;
}