#include <stdio.h>
#include <string.h>
struct Item{
    char name[50];
    char category[50];
    int quantity;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Item items[n];
    struct Item *ptr=items;
    for(int i=0;i<n;i++){
        scanf("%s %s %d",(ptr+i)->name,(ptr+i)->category,&(ptr+i)->quantity);
    }
    char search_category[50];
    int min_quantity;
    scanf("%s",search_category);
    scanf("%d",&min_quantity);
    for(int i=0;i<n;i++){
        if(strcmp((ptr+i)->category,search_category)==0){
            printf("%s %s %d\n",(ptr+i)->name,(ptr+i)->category,(ptr+i)->quantity);
        }
    }
    for(int i=0;i<n;i++){
        if((ptr+i)->quantity>=min_quantity){
            printf("%s %s %d\n",(ptr+i)->name,(ptr+i)->category,(ptr+i)->quantity);
        }
    }
    return 0;
}