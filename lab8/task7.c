#include <stdio.h>

int main(){
    int inventory[2][3][4];
    int i,j,k;
    printf("Enter quantities for warehouse inventory:\n");
    for(i=0;i<2;i++){
        printf("\nSection %d:\n",i+1);
        for(j=0;j<3;j++){
            printf("  Shelf%d (4 items): ",j+1);
            for(k=0;k<4;k++){
                scanf("%d",&inventory[i][j][k]);
            }
        }
    }
    int sectionTotal[2]={0};
    for(i=0;i<2;i++){
        for(j=0;j<3;j++) {
                for(k=0;k<4;k++) 
                sectionTotal[i]+=inventory[i][j][k];
            }
        }
    }
    int maxShelfSection=0,maxShelfNumber=0,maxShelfTotal=0;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            int shelfTotal= 0;
            for(k=0;k<4;k++){
                shelfTotal+=inventory[i][j][k];
            }
            if(shelfTotal>maxShelfTotal){
                maxShelfTotal=shelfTotal;
                maxShelfSection=i+1;
                maxShelfNumber=j+1;
            }
        }
    }
    printf("\nWarehouse Summary:\n");
    for(i=0;i<2;i++){
        printf("Section %d Total Items: %d\n",i+1,sectionTotal[i]);
    }
    printf("Shelf with Highest Quantity: Section %d,Shelf %d(%d items)\n", 
           maxShelfSection,maxShelfNumber,maxShelfTotal);
    return 0;
    }