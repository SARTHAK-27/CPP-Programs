//C Program to merge contents of two files into a third file

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr1 = fopen("file1.txt", "r");
    FILE *fptr2 = fopen("file2.txt", "r");
    FILE *fptr3 = fopen("file3.txt", "r");
    char c;

    if(fptr1==NULL || fptr2==NULL || fptr3=NULL){
        printf("cannot open the file");
        exit(0);
    }

    while(c = fgetc(fptr1) != NULL){
        fputc(c, fptr3);
    }

    while(c = fgetc(fptr2) != NULL){
        fputc(c, fptr3);
    }

    printf("files merged");

    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    return 0;
}