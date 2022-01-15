//find maximum between two numbers

// #include <stdio.h>

// int main()
// {
//     int a, b;
//     printf("Enter number a : ");
//     scanf("%d", &a);

//     printf("Enter number b : ");
//     scanf("%d", &b);

//     if (a > b)
//     {
//         printf("number a is greater than b");
//     }
//     else if (b > a)
//     {
//         printf("number b is greater than a");
//     }
//     else if (b == a)
//     {
//         printf("Both are equals");
//     }

//     return 0;
// }

//find maximum between three numbers

// #include <stdio.h>

// int main()
// {
//     int a, b, c;
//     printf("Enter number a : ");
//     scanf("%d", &a);

//     printf("Enter number b : ");
//     scanf("%d", &b);

//     printf("Enter number c : ");
//     scanf("%d", &c);

//     if (a > b && a > c)
//     {
//         printf("number a is greater than b and c");
//     }
//     else if (b > a && b > c)
//     {
//         printf("number b is greater than a and c");
//     }
//     else if (c > a && c > b)
//     {
//         printf("number c is greater than a and b");
//     }

//     return 0;
// }

// check number positive , negative or zero

// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter a number \n");
//     scanf("%d", &num);

//     if (num>0)
//     {
//         printf("%d is a positive number\n", num);
//     }
//     else if (num<0)
//     {
//         printf("%d is a negative number\n", num);
//     }
//     else if (num==0)
//     {
//         printf("You have entered zero!\n");
//     }

//     return 0;
// }

// to check entered number is divisible by 5 and 11 or not

// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter a number\n");
//     scanf("%d", &num);
//     if (num % 5 == 0 && num % 11 == 0)
//     {
//         printf("The number is divisible by 5 and 11 \n");
//     }
//     else
//     {
//         printf("Number is not divisible by 5 and 11\n");
//     }

//     return 0;
// }

// to check entered number is even or odd

// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter a number\n");
//     scanf("%d", &num);

//     if (num % 2 == 0)
//     {
//         printf("Number is even\n");
//     }
//     else
//     {
//         printf("Number is odd\n");
//     }

//     return 0;
// }

//  #include <stdio.h>

// int main()
// {
//     int Year;
//     printf("Enter a Year to check leap or not \n");
//     scanf("%d", &Year);

//     if (Year % 4 == 0)
//     {
//         printf("%d is a leap year\n",Year);
//     }
//     else
//     {
//         printf("%d is not a leap year\n",Year);
//     }

//     return 0;
// }

//Enter the week number and print week day

// #include <stdio.h>

// int main()
// {
//     int weeknum;
//     printf("Enter the week number\n");
//     scanf("%d", &weeknum);

//     switch (weeknum)
//     {
//     case 1:
//         printf("1 day is Sunday !\n");
//         break;
//     case 2:
//         printf("2 day is Monday !\n");
//         break;
//     case 3:
//         printf("3 day is Tuesday !\n");
//         break;
//     case 4:
//         printf("4 day is Wednesday !\n");
//         break;
//     case 5:
//         printf("5 day is Thursday !\n");
//         break;
//     case 6:
//         printf("6 day is Friday !\n");
//         break;
//     case 7:
//         printf("7 day is Saturday !\n");
//         break;

//     default:
//     printf("Invalid week number!\nweek number is only 1 to 7");
//         break;
//     }

//     return 0;
// }

//Enter the month number and get no. of days in a month
// #include <stdio.h>

// int main()
// {
//     int month_number;
//     printf("Enter the week number\n");
//     scanf("%d", &month_number);

//     switch (month_number)
//     {
//     case 1:
//         printf("1st no. Month January and its have 31 days!\n");
//         break;
//     case 2:
//         printf("2nd no. Month is February and its have 28 days!\n");
//         break;
//     case 3:
//         printf("3rd no. Month is March and its have 31 days!\n");
//         break;
//     case 4:
//         printf("4th no. Month is April and its have 30 days!\n");
//         break;
//     case 5:
//         printf("5th no. Month is May and its have 31 days!\n");
//         break;
//     case 6:
//         printf("6th no. Month is June and its have 30 days!\n");
//         break;
//     case 7:
//         printf("7th no. Month is July and its have 31 days!\n");
//         break;
//     case 8:
//         printf("8th no. Month is August and its have 31 days!\n");
//         break;
//     case 9:
//         printf("9th no. Month is September and its have 30 days!\n");
//         break;
//     case 10:
//         printf("10th no. Month is October and its have 31 days!\n");
//         break;
//     case 11:
//         printf("11th no. Month is November and its have 30 days!\n");
//         break;
//     case 12:
//         printf("12th no. Month is December and its have 31 days!\n");
//         break;

//     default:
//         printf("Invalid Month number!\nMonth is only under 1 to 12");
//         break;
//     }

//     return 0;
// }