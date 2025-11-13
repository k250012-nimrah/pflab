#include <stdio.h>
void val(int x){x+=5;}
void ref(int *x){*x+=5;}
int main(){int n;printf("Enter a number: ");scanf("%d",&n);printf("Before updateValue: %d\n",n);val(n);printf("After updateValue: %d\n",n);printf("Before updateReference: %d\n",n);ref(&n);printf("After updateReference: %d\n",n);}
