#include<stdio.h>
int main(){
    if(remove("ABC.txr") == 0){
        printf("deleted");
    }
    else{
        printf("not yet deleted");
    }

    return 0;
}