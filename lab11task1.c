#include <stdio.h>
struct Gift {
    char name[50];
    char type[50];
    float price;
    int quantity;
};
int main() {
    int n;
    scanf("%d",&n);
    struct Gift gifts[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %f %d",gifts[i].name,gifts[i].type,&gifts[i].price,&gifts[i].quantity);
    }
    float price_filter;
    int quantity_filter;
    scanf("%f",&price_filter);
    scanf("%d",&quantity_filter);
    for(int i=0;i<n;i++){
        if(gifts[i].price>price_filter){
            printf("%s %s %.2f %d\n",gifts[i].name,gifts[i].type,gifts[i].price,gifts[i].quantity);
        }
    }
    for(int i=0;i<n;i++){
        if(gifts[i].quantity>quantity_filter){
            printf("%s %s %.2f %d\n",gifts[i].name,gifts[i].type,gifts[i].price,gifts[i].quantity);
        }
    }
    return 0;
}