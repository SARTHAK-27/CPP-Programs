//C program to copy contents of one file to another file

#include<stdio.h>
#include<stdlib.h>
#define MAX 1000

int main(){
    FILE *fptr1, *fptr2;
    char c, filename[MAX];

    printf("enter the file name to copy from: ");
    scanf("%s", filename);

    fptr1 = fopen(filename, "r");
    if(fptr1 == NULL){
        printf("can not open the file \n");
        exit(0);
    }

    printf("enter the file name to write in: ");
    scanf("%s", filename);

    fptr2 = fopen(filename, "w");
    if(fptr2 == NULL){
        printf("can not open the file \n");
        exit(0);
    }

    c = fgetc(fptr1);
    while(c != EOF){
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }

    printf("Contents got copied to %s", filename);

    fclose(fptr1);
    fclose(fptr2);
    return 0;

}