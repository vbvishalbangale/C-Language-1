// Write a program to check entered number by user is divisible by 97 or not 
#include <stdio.h>

int main()
{
    int number;

    printf("Enter the number to check its divisible by 97 or not : ");
    scanf("%d",&number);

    printf("The value of remainder is %d\n",number%97);
    return 0;
}