// Write a program using functions to find average
// of three user entered numbers

// #include <stdio.h>

// float average(int a,int b,int c);

// int main()
// {
//     int a,b,c;

//     printf("Enter number a : ");
//     scanf("%d",&a);

//     printf("Enter number b : ");
//     scanf("%d",&b);

//     printf("Enter number c : ");
//     scanf("%d",&c);

// printf("The average of your numbers is %f\n",average(a,b,c));
//     return 0;
// }

// float average(int a,int b,int c){

// return (float)(a+b+c)/3;

// }

// Write a function to convert celsius to fahrenheit

// #include <stdio.h>
// float CelsiusToFar(int a);
// float CelsiusToFar(int a){
//     return (a*1.8)+32;
// }

// int main()
// {
//     int celsius;
//     printf("Enter celsius value to convert into fahrenheit : ");
//     scanf("%d",&celsius);

//     printf("The value of %d celsius is %f fahrenheit\n",celsius,CelsiusToFar(celsius));
//     return 0;
// }

// Write a function to calculates the force of attraction
// to the body

// #include <stdio.h>
// float Force(int a){
//     return (float)(9.8*a);
// }
// int main()
// {
//     int mass;
//     printf("Enter the value of mass in kgs: ");
//     scanf("%d",&mass);

//     printf("The value of force of attraction is %.2f \n",Force(mass));
//     return 0;
// }

// Write a program to using recursion to calculate nth element of fibonacci series

// #include <stdio.h>
// // fibonacci series = 0,1,1,2,3,5,8,13,21....
// int fib(int a){

// if (a==1){
//    return 0;
// }
// else if(a==2){
//     return 1;
// }

// else{

//     return fib(a-1)+fib(a-2);

// }

// }
// int main()
// {
//     int num;
//     printf("Enter the element of fibonacci series :\n");
//     scanf("%d",&num);

//     printf("The value of fibonacci series is %d\n",fib(num));

//     return 0;
// }

// Write a recursive function to calculate sum of first entered n natural numbers

// #include <stdio.h>
// int Sum(int a);

// int main()
// {
//     int num;
//     printf("Enter a positive number : ");
//     scanf("%d", num);

//     printf("The sum is %d\n",Sum(num));
//     return 0;
// }
// int Sum(int a)
// {
//     if (a != 0)
//     {
//        return  Sum(a-1)+a;
//     }
//     else
//     {
//         return a;
//     }
// }

// Write a program using functions to print the following pattern
// first n lines

// n = 3;

// *
// ***
// ***** (like odd pattern)

// #include <stdio.h>

// void Print_Pattern(int a)
// {
//     if (a == 1)
//     {
//         printf("*\n");
//         return;
//     }
//     Print_Pattern(a - 1);
//     for (int i = 0; i < (2 * a - 1); i++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }
// int main()
// {
//     int num;
//     printf("Enter a number to print odd pattern : ");
//     scanf("%d", &num);

//     Print_Pattern(num);

//     return 0;
// }

// Write a program using functions to print the following pattern
// first n lines

// n = 3;

// *
// ***
// ***** (like odd pattern) : using itrative strategy

#include <stdio.h>

void star_Pattern(int n);

int main()
{

    int n;
    printf("\nEnter a number to print odd star pattern : ");
    scanf("%d", &n);

    printf("\n*** The odd star pattern is follows ***\n");
    star_Pattern(n);
    return 0;
}

void star_Pattern(int n)
{

    if (n == 1)
    {
        printf("*\n");
        return;
    }

    for (int j = 0; j < (2 * n - 1); j++)
    {
        printf("*");
    }
    printf("\n");
}