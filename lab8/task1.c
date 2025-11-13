#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int image[8][8];
    int brightened[8][8];
    int i, j;  
    printf("Original Image:\n");
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            image[i][j]=rand()%256;
            printf("%3d ", image[i][j]);
        }
        printf("\n");
    }
    printf("\nBrightened Image:\n");
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 8; j++) {
            brightened[i][j] = image[i][j] + 20;
            if(brightened[i][j] > 255) {
                brightened[i][j] = 255;
            }
            printf("%3d ", brightened[i][j]);
        }
    printf("\n");
    }
    return 0;
}