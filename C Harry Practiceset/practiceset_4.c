// #include <stdio.h>
// // This program print multiplication table of a given number
// int main()
// {
//     int num;
//     printf("Enter a number to print multiplication table of : \n");
//     scanf("%d",&num);

// printf("The multiplication table of %d is follows :\n",num);
//     for(int i = 1; i < 11; i++){
//         printf("%d X %d = %d \n",num,i,i*num);
//     }
//     return 0;
// }

// #include <stdio.h>
//  // This program print multiplication table of a given number in reverse order

// int main()
// {
//     int num;
//     printf("Enter a number to print multiplication table of in reverse order : \n");
//     scanf("%d",&num);

//  printf("The multiplication table of %d in reverse order is follows :\n",num);

// for (int i = 10; i; i--)
// {
//     printf("%d X %d = %d \n",num,i,i*num);
// }

//     return 0;
// }

// ques: do while loop is executed
// 1. at least once
// 2. at least twice
// 3. at most once

// ans: at least once

// write a program to sum of first n natural numbers

// #include <stdio.h>

// int main()
// {
//     int sum = 0, num;
//     printf("Enter number : ");
//     scanf("%d", &num);
//     int i = 1;

//     using while loop
//     while(i<=num){
//         sum+=i;
//         i++;
//     }

//     using do while loop
//    do
//     {
//         sum += i;
//         i++;
//     } while (i <= num);

// using for loop
// for ( i = 0; i <= num; i++)
// {
// sum+=i;
// }

//     printf("The total sum 1 to %d is %d ", num, sum);
//     return 0;
// }

//  #include <stdio.h>
// // // This program print multiplication table of a given number
// int main()
// {
//     int num;
//     printf("Enter a number to print multiplication table of : \n");
//     scanf("%d",&num);

// printf("The multiplication table of %d is follows :\n",num);
//     for(int i = 1; i < 11; i++){
//         printf("%d X %d = %d  and sum is %d + %d = %d \n",num,i,i*num,num,i,num+i);
//     }
//     return 0;
// }

// calculate the factorial of a given number using for loop
// what is factorial
// example: factorial of 5 = 5x4x3x2x1

// #include <stdio.h>
// int main()
// {
//     int i=1,n,factorial=1;
//     printf("Enter a number to find factorial of : ");
//     scanf("%d",&n);

// for (int i = 1; i <= n; i++)
// {
//     factorial*=i;
// }

// while (i<=n)
// {
//     factorial*=i;
//     i++;
// }

//     do
//     {
//         factorial*=i;
//         i++;
//     } while (i<=n);

//     printf("The factorial of %d is %d\n",n,factorial);

//     return 0;
// }

// #include<stdio.h>

// int main(){
// Prime Numbers = A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers.
// Disclaimer: This is not the best method to solve this problem
//     int n = 2, prime=1;
//     for(int i=2;i<n;i++){
//         if (n%i==0 ){
//             prime = 0;
//             break;
//         }
//     }
//     if (prime==0){
//         printf("This is not a prime number");
//     }
//     else{
//         printf("This is a prime number");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int  num, prime = 1;
//     printf("Enter a number : ");
//     scanf("%d", &num);

//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             prime = 0;
//             break;
//         }
//     }
//     if (prime == 0)
//     {
//         printf("This is not a prime number\n");
//     }
//     else
//     {
//         printf("This is a prime number\n");
//     }

//     return 0;
// }

// prime number program using while loop

// #include <stdio.h>

// int main()
// {

//     int n, prime = 1;
//     int i = 2;
//     printf("Enter a number : ");
//     scanf("%d", &n);

//     while (i < n)
//     {
//         if (n % i == 0)
//         {
//             prime = 0;
//             break;
//         }
//         i++;
//     }
//     if (prime == 0)
//     {
//         printf("This is a not prime number\n");
//     }
//     else
//     {
//         printf("This is a prime number\n");
//     }

//     return 0;
// }

// prime number using do while loop

// #include <stdio.h>

// int main(){

//     int n,prime=1;
//     int i=2;
//     printf("Enter a number : ");
//     scanf("%d",&n);

//     do{
//         if(n%i==0){
//             prime = 0;
//             break;
//         }
//         i++;
//     }while(i<n);

//     if(prime==0){
//         printf("This is a not prime number\n");
//     }
//     else{
//         printf("This is prime number\n");

//     }
//     return 0;
// }