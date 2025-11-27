<<<<<<< HEAD
#include <stdio.h>
int sum_scores(int scores[],int n){
    if(n==0)return 0;
    return scores[n-1]+sum_scores(scores,n-1);
}
int main(){
    int teams,rounds;
    scanf("%d %d",&teams,&rounds);
    int scores[teams][rounds];
    for(int i=0;i<teams;i++){
        for(int j=0;j<rounds;j++){
            scanf("%d",&scores[i][j]);
        }
    }
    int threshold;
    scanf("%d",&threshold);
    for(int i=0;i<teams;i++){
        int total=sum_scores(scores[i],rounds);
        printf("Team %d: %d\n",i+1,total);
        if(total>threshold){
            printf("Team %d is above threshold.\n",i+1);
        }
    }
    return 0;
=======
#include<stdio.h>
int main(){
    printf("Name:Nimrah\n\n");
    printf("AGE:19 \n\n");
    printf("Couse:\"c programming\"\n\n");
    printf("Result:Passed");
    return 0;
>>>>>>> ea74964a1f4a61463c98604045cea7d5d251033f
}