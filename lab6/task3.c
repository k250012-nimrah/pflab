#include <stdio.h>
#include <math.h>

int main() {
    int n,i,j,isPrime;
    printf("Enter a number: ");
    scanf("%d", &n);
    isPrime=1;
    if(n<=1){
        isPrime=0;
    } else{
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0) {
                isPrime=0;
                break;
            }
        }
    }
    if(isPrime) {
        printf("%d is a prime number.\n",n);
    } else {
        printf("%d is not a prime number.\n",n);
    }
    printf("Prime numbers from 1 to %d: ",n);
    for(i = 2; i <= n; i++){
        isPrime = 1;
        for(j=2;j<=sqrt(i);j++) {
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}