<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
void reverse(char word[],int start,int end){
    if(start>=end)return;
    char temp=word[start];
    word[start]=word[end];
    word[end]=temp;
    reverse(word,start+1,end-1);
}
int is_palindrome(char word[],int start,int end){
    if(start>=end)return 1;
    if(word[start]!=word[end])return 0;
    return is_palindrome(word,start+1,end-1);
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char word[100];
        scanf("%s",word);
        char original[100];
        strcpy(original,word);
        reverse(word,0,strlen(word)-1);
        printf("Reversed: %s\n",word);
        if(is_palindrome(original,0,strlen(original)-1)){
            printf("Palindrome: Yes\n");
        }else{
            printf("Palindrome: No\n");
        }
    }
    return 0;
}
=======
#include<stdio.h>
float main(){
    float salary,HRA,DA,gross;
    printf("enter salary: ");
    scanf("%f",&salary);
    HRA=salary*0.10;
    DA=salary*0.05;
    gross=salary+HRA+DA;
    printf("The gross salary = %.2f%%",gross);

    }
>>>>>>> ea74964a1f4a61463c98604045cea7d5d251033f
