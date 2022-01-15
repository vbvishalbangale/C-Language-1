#include <stdio.h>

int main(){

    int a,i=0;
    printf("Enter natural number : ");
    scanf("%d",&a);

    do{
        printf("%d\n",i+1);
        i++;
    }while(i<a);

    return 0;
}