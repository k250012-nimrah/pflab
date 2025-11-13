#include<stdio.h>
void addBook(int isbns[], char titles[][50], float prices[], int quantities[], int *count){
    printf("enter isbn");
    scanf("%d",&isbns[*count]);
    printf("enter title ");
    scanf("%[^\n]c",&titles[*count]);
    printf("enter price");
    scanf("%f",&prices[*count]);
    printf("enter quantity ");
    scanf("%d",&quantities[*count]);
    
    for(int i=0;i<*count;i++){
    int newisbn=isbns[i];
    if(newsisbn==isbns[i]){printf("book already exists")}
    else{printf("book added successfully")
    *count++;}    
    }
    
}
void processSale(int isbns[], int quantities[], int count){
    printf("enter isbn");
    scanf("%d",&newIsbn);
    printf("enter quantity");
    scanf("%d",&qty);
    int bookfound=0;
    int stock=0;
    for(int i=0;i<count;i++){
        if(newIsbn==isbns[i]){printf("book found");
        bookfound=1;}else{printf("book not found");
        bookfound=0}
        
            
        
        }for(int j=0;j<count;j++){
            if(qty==quantities[i]){
                quantities[i]-= qty;
                stock=1;
                printf("in stock");
            }else{printf("out of stock");
            stock=0;}
        }
        if(bookfound){
            if(stock){
                printf("sold successfully");
            }
        }
}
