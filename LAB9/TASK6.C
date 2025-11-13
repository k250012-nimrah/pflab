#include <stdio.h>
void analyze(int *a,int n,int *max,int *min,float *avg){
    *max=*min=a[0];
    int s=0;
    for(int i=0;i<n;i++){
        if(a[i]>*max)*max=a[i];
        if(a[i]<*min)*min=a[i];
        s+=a[i];
    }
    *avg=(float)s/n;
}
int main(){
    int a[]={50,60,80,40,75,62};
    int n=6,mn,mx;
    float av;
    analyze(a,n,&mx,&mn,&av);
    printf("Maximum=%d\nMinimum=%d\nAverage=%.2f\n",mx,mn,av);
    return 0;
}
