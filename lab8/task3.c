#include <stdio.h>
#include <ctype.h>

int main() {
    char words[3][10];
    int i,j,vowelCount = 0;
    
    printf("Enter 3 words (max 9 characters each):\n");
    for(i = 0; i < 3; i++) {
        printf("Word %d: ", i + 1);
        scanf("%9s", words[i]);
    }
    for(i=0;i<3;i++) {
        for(j=0;words[i][j]!='\0';j++) {
            char ch=toupper(words[i][j]);
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
                vowelCount++;
            }
        }
    }
    printf("\nTotal vowels in all words: %d\n",vowelCount);
    return 0;
}