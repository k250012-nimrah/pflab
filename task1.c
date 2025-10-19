#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements to be entered");
    scanf("%d",&n);
    int temperature[n];
    for(int i=0;i<n;i++){
        printf("day %d= ",i+1);
        scanf("%d",&temperature[i]);
    }
    int max=temperature[0];
    int min=temperature[0];
    for(int j=0;j<n;j++){
        if(temperature[j]>max){
            max=temperature[j];
        }
        if(temperature[j]<min){
            min=temperature[j];
        

    }
}
    printf("Coldest temperature= %d C",min);
    printf("\n Hottest temperature= %d C",max);
}
