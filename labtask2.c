<<<<<<< HEAD
#include <stdio.h>
void countdown(int days){
    if(days<0)return;
    printf("%d\n",days);
    countdown(days-1);
}
int main(){
    int events;
    scanf("%d",&events);
    int days[events];
    for(int i=0;i<events;i++){
        scanf("%d",&days[i]);
    }
    for(int i=0;i<events;i++){
        countdown(days[i]);
    }
    return 0;
=======
#include<stdio.h>
int main(){
    int a,b;
    printf("enter a value for b ");//inputting the value for b which will be assigned to a
    scanf("%d",&a);
    printf("enter a value for a ");

    scanf("%d",&b   );
    printf("a=%d\n",a);
    
    

    printf("b=%d",b);
    


>>>>>>> ea74964a1f4a61463c98604045cea7d5d251033f
}