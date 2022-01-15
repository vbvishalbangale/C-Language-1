#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number to Check The number is Divisible by 97 or Not\n");
    scanf("%d", &a);

    printf("If Value = 0 then number is Divisible\nIf Value is Non zero then sorry!\n");
    printf("Value = %d\n", a % 97);
    // 3*x/y-z+k where x=2  y=3  z=3  k=1
    // printf("%d",3*2/3-3+1);
    //2-3+1
    //2-2 = 0
    return 0;
}
