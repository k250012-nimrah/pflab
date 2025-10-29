#include<stdio.h>
#include<string.h>

int main(){
    char sentence[200];
    char longestWord[100];
    char currentWord[100];
    int maxLength = 0, currentLength = 0;
    int wordStart = 0;
    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);
    printf("Original sentence: %s\n", sentence);
    for (int i = 0; i <= strlen(sentence); i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {

            if (currentLength > maxLength) {
                maxLength = currentLength;
                
                for (int j = 0; j < currentLength; j++) {
                    longestWord[j] = sentence[wordStart + j];
                }
                longestWord[currentLength] = '\0'; 
            }
            
            currentLength = 0;
            wordStart = i + 1; 
        } else {
            
            currentLength++;
        }
    }
    if (maxLength > 0) {
        printf("Longest word: \"%s\"\n", longestWord);
        printf("Length: %d characters\n", maxLength);
    } else {
        printf("No words found in the sentence.\n");
    }
    return 0;
}