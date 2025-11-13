#include <stdio.h>

int main() {
    int n,i,j,k;
    printf("Enter the size of square board (N): ");
    scanf("%d", &n);
    int board[n][n];
    int rotated[n][n];
    printf("\nOriginal Board:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            board[i][j]=i*n+j+1;
            printf("%3d ",board[i][j]);
        }
   printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            rotated[i][j]=board[n-j-1][i];
        }
    }
    printf("\nRotated Board (90° clockwise):\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%3d ",rotated[i][j]);
        }
        printf("\n");
    }
    return 0;
}