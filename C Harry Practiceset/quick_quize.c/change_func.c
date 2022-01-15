#include <stdio.h>
#include <math.h>

int main()
{
    int side;
    printf("Enter value one side of a square : ");
    scanf("%d",&side);

    printf("The Area of square is %.2f\n",pow(side,2));
    
    return 0;
}