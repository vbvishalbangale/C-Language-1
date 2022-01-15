// what will be the output of this program

// #include<stdio.h>

// int main(){
// int  a=10;
// if (a=11)
// printf("I am 11");
// else
// printf("I am not 11");

// // answer :  output--> I am 11
// }


// percentage calculator
// student require atleast 33 marks in each subjects and overall 40%

// #include <stdio.h>

// int main()
// {
//     int physics,chemistry,maths;
//     float percentage;
//     printf("Enter Physics Marks : ");
//     scanf("%d",&physics);

//     printf("Enter Chemistry Marks : ");
//     scanf("%d",&chemistry);

//     printf("Enter Maths Marks : ");
//     scanf("%d",&maths);

// percentage=(physics+chemistry+maths)/3;

// if ((percentage<40)|| physics<33 || chemistry<33||maths<33)
// {
//     printf("Your percentage is %.2f %% and you are failed!\n",percentage);
// }
// else {
//     printf("Your percentage is %.2f %% and you are Passed!\n",percentage);

// }


//     return 0;
// }

//tax calculator
// take amount as an input from user 

// income slab               tax
// less than 2.5 lack        0
// 2.5 - 5.0 lacks           5%
// 5.0 - 10 lacks            20%
// above 10 lacks            30%


// #include <stdio.h>

// int main()
// {
//     float amount,tax=0;
//     printf("Enter your annual income to calculate tax of : ");
//     scanf("%f",&amount);

// if(amount<250000){

// tax = tax + 0.5*(amount-250000);
//     printf("The value is 5%% is for %f  tax amount is %f\n",amount,tax);
// }
// else if(amount>250000 && amount < 1000000){

// tax = tax + 0.20*(amount-250000);
//     printf("The value is 20%% is for %f  tax amount is %f\n",amount,tax);
// }
// else if(amount> 1000000){

// tax = tax + 0.30*(amount-250000);
//     printf("The value is 30%% is for %f  tax amount is %f\n",amount,tax);
// }
// else{
//     printf("Enter a valid amount ! \n");
// }
//     return 0;
// }

// to check entered year is leap or not 
// #include <stdio.h>

// int main()
// {
//     int year;
//     printf("Enter year  : ");
//     scanf("%d",&year);

//     if (year%4==0)
//     {
//         printf("%d is leap year\n",year);
//     }
//     else {
//         printf("%d is not a leap year\n",year);
//     }
    
//     return 0;
// }


// find the greatest of numbers entered by the user

// #include <stdio.h>

// int main()
// {
//     int num1,num2,num3,num4;
//     printf("Enter 1st number : ");
//     scanf("%d",&num1);
//     printf("Enter 2nd number : ");
//     scanf("%d",&num2);
//     printf("Enter 3rd number : ");
//     scanf("%d",&num3);
//     printf("Enter 4th number : ");
//     scanf("%d",&num4);

//     if (num1>num2&&num1>num3&&num1>num4)
//     {
//         printf("%d is a greatest number \n ",num1);
//     }
//     else if (num2>num1&&num2>num3&&num2>num4)
//     {
//         printf("%d is a greatest number \n ",num2);
//     }
//     else if (num3>num2&&num3>num1&&num3>num4)
//     {
//         printf("%d is a greatest number \n ",num3);
//     }
//     else if (num4>num2&&num4>num3&&num4>num1)
//     {
//         printf("%d is a greatest number \n ",num4);
//     }
    
//     return 0;
// }


// find entered character is lowercase or not 

// #include <stdio.h>

// int main()
// {
//     //97-122 = a-z
//     char ch;
//     printf("Enter a character : ");
//     scanf("%c",&ch);

//     if (ch<=122 && ch >=97)
//     {
//         printf("It is lowercase\n",ch);
//     }
//     else{
//         printf("It is not lowercase\n",ch);
//     }
    
//     return 0;
// }