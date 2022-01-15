#include <stdio.h>


int sum(int a ,int b); //function prototype

int main()
{
    int a,b;
    printf("Enter number a : ");
    scanf("%d",&a);
    printf("Enter number b : ");
    scanf("%d",&b);

    printf("The sum is %d\n",sum(a,b));//function call
    return 0;
}

int sum(int a ,int b){//function definition
    return a+b;
}