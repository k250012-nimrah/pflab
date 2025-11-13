#include <stdio.h>
int busy(int a[],int n){int i,m=a[0],d=0;for(i=1;i<n;i++)if(a[i]>m){m=a[i];d=i;}return d;}
int slow(int a[],int n){int i,m=a[0],d=0;for(i=1;i<n;i++)if(a[i]<m){m=a[i];d=i;}return d;}
float avgP(int a[],int n){int s=0;for(int i=0;i<n;i++)s+=a[i];return (float)s/n;}
int main(){int a[7];printf("Enter patients for 7 days:\n");for(int i=0;i<7;i++)scanf("%d",&a[i]);float avg=avgP(a,7);int b=busy(a,7),s=slow(a,7);printf("Average Patients per Day: %.2f\n",avg);printf("Busiest Day: Day %d (%d patients)\n",b+1,a[b]);printf("Slowest Day: Day %d (%d patients)\n",s+1,a[s]);}
