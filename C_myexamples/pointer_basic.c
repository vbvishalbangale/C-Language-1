#include <stdio.h>
int avg(int a, int b, int c)
{
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    printf("The value of c is %d\n",c);
}
int main()
{
    int a,b,c;
    int *j, i = 25;
    j = &i;
    printf("%u\n", i);
    printf("%u\n");

    printf("Enter number a : ");
    scanf("%d", &a);

    printf("Enter number b : ");
    scanf("%d", &b);

    printf("Enter number c : ");
    scanf("%d", &c);

    printf("The value of average of a,b & c is  %d\n", avg(b,c,a));

    return 0;
}