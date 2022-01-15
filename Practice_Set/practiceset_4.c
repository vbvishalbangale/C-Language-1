// #include <stdio.h>
// multiplication table program
// int main()
// {
//     int num;
//     printf("\nEnter the number you want\nFor make Multiplication table\n");
//     scanf("%d", &num);

//     printf("The Multiplication table of %d is follows\n", num);

// using for loop
// for (int i = 1; i < 11; i++)
// {
//     printf("%d x %d = %d\n", num, i, num * i);
// }

// using while loop
// int i = 1;
//  while (i<11)
// {
//    printf("%d x %d = %d\n", num, i, num * i);
// i++;
// }

// using do while loop
// int i=1;
// do
// {
//    printf("%d x %d = %d\n", num, i, num * i);
//    i++;
//     /* code */
// } while (i<11);

//     return 0;
// }

// for reverse multiplication table program
// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("\nEnter the number you want\nFor make Reverse Multiplication table\n");
//     scanf("%d", &num);

//     printf("The Multiplication table of %d is follows\n", num);
// using for loop
// for (int i = num;i; i--)
// {
//     printf("%d x %d = %d\n", num, i, num * i);
// }

// using while loop
// int i=num ;
// while (i)
// {
//    printf("%d x %d = %d\n", num, i, num * i);
//     i--;
// }

// using do while loop
// int i=num;
// do{
//   printf("%d x %d = %d\n", num, i, num * i);
//  i--;
// } while (i);

//     return 0;
// }

// program to calculates sum first ten natural numbers using All Three loops

// #include <stdio.h>

// int main()
// {
//     int natural, sum = 0, i = 1;

//     printf("Enter the number for sum\nin reverse order using for loop\n");
//     scanf("%d", &natural);
//     using for loop
//         for (i = 1; i<=natural; i++)
//     {
//         sum += i;
//     }
//     printf("\nThe sum of 0 to %d =  %d\n ", natural, sum);

//Using while loop
// i = 1;
// while (i<=natural)

// {
//     sum += i;
//     i++;
// }
// printf("\nThe sum of 0 to %d =  %d\n ", natural, sum);

//do while loop

// i = 1;
// do
// {
//     sum+=i;
//     i++;
// } while (i<=natural);

// printf("\nThe sum of 0 to %d =  %d\n ", natural, sum);

//     return 0;
// }

// to sum of the the numbers occuring in multiplication table of 8

// #include <stdio.h>

// int main()
// {
//     int sum=0,n=8;
//     for (int  i = 1; i < 11; i++)
//     {
//         printf("%d X %d = %d\n", n, i, n*i);
//         sum+=i*n+8;
//         printf("The sum of total numbers is %d", sum);
//     }

//     return 0;
// }

// factorial using for loop
// #include <stdio.h>

// int main()
// {
//     int num, factorial=1;
//     printf("Enter the number for find factorial of \n");
//     scanf("%d", &num);
//     if (num == 0 || num == 1)
//     {
//         printf("Factorial of %d  =  1 ", num);
//     }
//using for loop 
    // for (int i = 1; i <= num; i++)
    // {
    //     factorial*=i;
    // }
    

//using while loop
// int i=1;
// while (i<=num)
// {
//     i++;
//     factorial*=i;
// }

//using do while loop 

// do{

//     factorial*=i;
//     i++;
// }while(i<=num);


//     printf("Factorial of %d  =  %d\n", num,factorial);
//     return 0;
// }