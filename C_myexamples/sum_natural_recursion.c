#include <stdio.h>

int SumRecursion(int a);

int main()
{
    int num;
    printf("Enter a number for sum from 0 : ");
    scanf("%d", &num);
    SumRecursion(num);

    return 0;
}
int SumRecursion(int a)
{
SumRecursion(a-1)+SumRecursion(a);
}
