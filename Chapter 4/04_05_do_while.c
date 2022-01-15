#include<stdio.h>

int main(){
    int i = 220;
// do while loop executes atleast once 
// condition true or false nothing matter
    do{
        printf("The value of i is %d\n", i);
        i++;
    }while(i <10);

    return 0;
}