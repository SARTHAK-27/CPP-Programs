//C Program to print contents of file

#include<stdio.h>
#include<stdlib.h>
#define MAX 1000

int main(){
    FILE *fptr;
    char filename[MAX];
    char c;

    printf("enter the filename:");
    scanf("%s \n", filename);

    fptr = fopen(filename, "r");

    if(fptr == NULL){
        printf("Cannot open the file");
        return 0;
    }

    c = fgetc(fptr);
    while(c != EOF){
        printf("%c", c);
        c = fgetc(fptr);
    }

    fclose(fptr);
    return 0;
}