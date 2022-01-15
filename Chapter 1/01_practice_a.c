// #include<stdio.h>
//this the formula of Area of Rectangle

// int main(){
//     int length=3, breadth=8;
//     int area = length*breadth;
//     printf("The area of this rectangle is %d", area);
//     return 0;
// }

//this the formula of Area of square
#include <stdio.h>

int main()
{
    int side1, side2;
    printf("Enter the first length of square\n");
    scanf("%d",&side1);
    
    printf("Enter the second length of square\n");
    scanf("%d",&side2);

    printf("The area of square is %d\n", (side1*side1)+(side2*side2));
     return 0;
}