// write a function to find average of three numbers
// #include <stdio.h>
// float average(int a, int b, int c);// function prototype

// int main()
// {
//     int a,b,c;
//     printf("Enter number a : ");
//     scanf("%d", &a);
//     printf("Enter number b : ");
//     scanf("%d", &b);
//     printf("Enter number c : ");
//     scanf("%d", &c);

//     printf("The Average of a,b and c is %f",average(a,b,c)); // function call
//     return 0;
// }

// float average(int a, int b, int c){ // function definition

// return (float)(a+b+c)/3;

// }

// write a function to convert celsius into fahrenheit

// #include <stdio.h>
// float celsiusTofahren(int a)
// {

//     return (a * 1.8) + 32;
// }

// int main()
// {
//     int temp;
//     printf("Enter the value of celsius :\n");
//     scanf("%d", &temp);

//     printf("%d celsius is equal to %.2f fahrenheit", temp, celsiusTofahren(temp));
//     return 0;
// }

// make a function to calculates force of attraction on body of mass m exerted by earth (g = 9.8 m/s2)

// #include <stdio.h>

// int force(int mass){
//     return mass*9.8;
// }
// int main()
// {
//     int mass;
//     printf("Enter the value of mass to calculates force of attraction\n");
//     scanf("%d",&mass);

//     printf("The value of force of attraction %dkg mass is %.2f Newtons\n",mass,(float)force(mass));
//     return 0;
// }

// Write a program using recursions to calculates nth no. of fibonacci series

// #include <stdio.h>

// int fib(int a)
// {

//     if (a == 1)
//     {
//         return 0;
//     }
//     else if (a == 2)
//     {
//         return 1;
//     }
//     else
//     {
//         return fib(a-1)+fib(a-2);
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter the nth number of fibonacci series\n");
//     scanf("%d", &num);

//     printf("The value of %dth fibonacci number is %d \n", num, fib(num));

//     return 0;
// }


// write a recursive function to calculates the sum of first n natural numbers 

// #include <stdio.h>

// int TotalSum(int a){

//     return (a)+(a-1); 
// }
// int main()
// {
//     int number;
//     printf("Enter a number to find sum from 0\n");
//     scanf("%d", &number);

//     printf("The sum 0 to %d is  %d \n",number,TotalSum(number));

//     return 0;
// }

