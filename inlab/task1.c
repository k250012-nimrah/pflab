 #include<stdio.h>
 int modify (int a,int b){
    a=a*a;
    b=b*b*b;
    return a+b;
 }
 int main(){
    int a=2;
    int b=4;
    printf("a before function call=%d",a);
    printf("b before function call=%d",b);
    printf ("modified",modify(a,b));
    

 }