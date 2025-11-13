#include <stdio.h>
void find(int x[],int n,int t,int *p1,int *p2){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(x[i]+x[j]==t){
                *p1=i;
                *p2=j;
                return;
            }
        }
    }
}
int main(){
    int n,t,p1,p2;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++) scanf("%d",&x[i]);
    scanf("%d",&t);
    find(x,n,t,&p1,&p2);
    printf("%d %d",p1,p2);
    return 0;
}
