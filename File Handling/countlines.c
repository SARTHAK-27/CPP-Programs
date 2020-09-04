// C Program to count the no. of lines in a file

#include<stdio.h>
#define MAX 1000

int main(){
    FILE *fp;
    int count = 0;
    char filename[MAX];
    char c;

    printf("enter the file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if(fp == NULL){
        printf("Could not open the file %s", filename);
        return 0;
    }

    for(c = getc(fp); c!= EOF; c = getc(fp)){
        if(c == '\n'){
            count++;
        }
    }

    fclose(fp);
    printf("the file %s has %d lines \n", filename, count);

    return 0;
}