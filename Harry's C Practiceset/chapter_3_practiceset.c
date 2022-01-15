// What will be output of this program
/*
int a = 10;
if(a=11)
printf("I am 11");
else
printf("I am not 11");

output answer : I am 11  
reason : any non zero condition is evaluated as true in c language

 */

// #include<stdio.h>

// int main()
// {
//     int chemistry, physics, biology;
//     float total_percentage;

//     printf("Enter your chemistry marks : ");
//     scanf("%d",&chemistry);

//     printf("Enter your physics marks : ");
//     scanf("%d",&physics);

//     printf("Enter your biology marks : ");
//     scanf("%d",&biology);

//     total_percentage = (chemistry+physics+biology)/(float)3;

//     if (total_percentage<40 || chemistry <33 || physics <33 || biology <33)
//     {
//         printf("You got %.2f %% and you are failed\n",total_percentage);
//     }
//     else {
//         printf("You got %.2f %% and you are Passed\n",total_percentage);

//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int income;
//     int tax = 0;
//     printf("Enter your Annual income : ");
//     scanf("%d", &income);

//     if (income <= 250000)
//     {
//       printf("Your income is less than 250000 , you are tax free\n");
//     }

//     else if (income >= 250000 && income <= 500000)
//     {
//         tax = tax + 0.5 * (income - 250000);
//         printf("The value of 5%% tax is %d R.s\n", tax);
//     }
//     else if (income >= 500000 && income <= 1000000)
//     {
//         tax = tax + 0.20 * (income - 250000);
//         printf("The value of 20%% tax is %d R.s\n", tax);
//     }
//     else if (income >= 1000000)
//     {
//         tax = tax + 0.30 * (income - 250000);
//         printf("The value of 30%% tax is %d R.s\n", tax);
//     }
//     return 0;
// }

// to check input year leap or not

// #include <stdio.h>

// int main()
// {
//     int Enter_year;
//     printf("Enter year to check leap or not : ");
//     scanf("%d",&Enter_year);

//     if(Enter_year%4==0){
//         printf("%d is a leap year\n", Enter_year);
//     }
//     else{
//         printf("%d is not a leap year\n", Enter_year);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char ch;
//     printf("Enter a character to check it's lowercase or not : ");
//     scanf("%c",&ch);

//     if(ch>=97&& ch<=122){
//         printf("%c is lowercase",ch);
//     }
//     else{
//         printf("%c is not a lowercase",ch);
//     }
//     return 0;
// }

// Write a program to find greatest number between four numbers
// entered by the user

// #include <stdio.h>

// int main()
// {
//     int num1, num2, num3, num4;
//     printf("Enter first number : ");
//     scanf("%d", &num1);
//     printf("Enter second number : ");
//     scanf("%d", &num2);
//     printf("Enter third number : ");
//     scanf("%d", &num3);
//     printf("Enter fourth number : ");
//     scanf("%d", &num4);

//     if (num1 > num2 && num1 > num3 && num1 > num4)
//     {
//         printf("%d is greater number \n", num1);
//     }
//     else if (num2 > num1 && num2 > num3 && num2 > num4)
//     {
//         printf("%d is greater number \n", num2);
//     }
//     else if (num3 > num1 && num3 > num2 && num3 > num4)
//     {
//         printf("%d is greater number \n", num3);
//     }
//     else if (num4 > num1 && num4 > num3 && num4 > num2)
//     {
//         printf("%d is greater number \n", num4);
//     }
//     return 0;
// }