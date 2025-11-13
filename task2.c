#include <stdio.h>
float bonus(float s){return s<30000?s*0.2:s*0.1;}
int main(){float s[5],b,t=0;printf("Enter salaries of 5 employees:\n");for(int i=0;i<5;i++){scanf("%f",&s[i]);b=bonus(s[i]);printf("Employee %d Bonus: %.2f\n",i+1,b);t+=s[i]+b;}printf("Total Payout: %.2f\n",t);}
