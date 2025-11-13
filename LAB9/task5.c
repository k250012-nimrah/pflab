#include <stdio.h>
#include <string.h>
char* name(char *f,char *l){static char full[50];strcpy(full,f);strcat(full," ");strcat(full,l);return full;}
int main(){char f[20],l[20];printf("Enter first name: ");scanf("%s",f);printf("Enter last name: ");scanf("%s",l);printf("Full Name: %s\n",name(f,l));}
