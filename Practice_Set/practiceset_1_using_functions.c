// #include <stdio.h>

// int rectangleArea(int a, int b)
// {
//   return printf("The Area of a rectangle is %d\n", a * b);
// }

// int main()
// {
//     int a,b;

//     printf("This Program calculates Area of Rectangle\n");
//      printf("Enter the value of rectangle length\n");
//     scanf("%d", &a);
//     printf("Enter the value of rectangle width\n");
//     scanf("%d", &b);

//     rectangleArea(a,b);
//     return 0;
// }

#include <stdio.h>

float circleArea(int a,float PI)
{

    //  PI = 3.14159265;
    return (PI * a * a);
}
int main()
{
    int radius;
    float PI = 3.14159265;

    printf("Enter the value of radius\n");
    scanf("%d", &radius);

    printf("The Area of Circle of is %f\n",circleArea(radius,PI));
    return 0;
}