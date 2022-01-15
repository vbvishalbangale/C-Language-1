// #include <stdio.h>
// // find the greatest number among the three numbers entered by user
// int main()
// {
//     int num1, num2, num3;
//     printf("Enter the first number : ");
//     scanf("%d",&num1);
    
//     printf("Enter the second number : ");
//     scanf("%d",&num2);
    
//     printf("Enter the third number : ");
//     scanf("%d",&num3);

// if(num1>num2&&num1>num3){
//     printf("%d is greater number \n",num1);
// }
// else if(num2>num1&&num2>num3){
//     printf("%d is greater number \n",num2);
// }
// else if(num3>num1&&num3>num2){
//     printf("%d is greater number \n",num3);
// }
//     return 0;
// }


// #include <stdio.h>
// // find entered number is positive or negative
// int main()
// {
//     int num;
//     printf("Enter number : ");
//     scanf("%d",&num);

// if (num<0)
// {
//     printf("%d is a negative number\n",num);
// }
// else if (num==0){
//     printf("%d cannot contain + or - sign\n",num);
// }
// else if(num>0)    
// {
//     printf("%d is a positive number \n",num);
// }
//     return 0;
// }


// check entered number is even or odd 
// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter number : ");
//     scanf("%d",&num);

//     if(num%2==0)
//     {
//         printf("%d is even\n",num);
//     }
//     else{
//         printf("%d is odd\n",num);
//     }
//     return 0;
// }



if else practice;

basic structure of if statement :

if condition true then executes the code 
or condition false then control out of if statement 
(agar if true then code inside if nahito if se bahar aajana)

if ( condition ){
    code ;
}



if else statement :

// if condition true then executes the if inner code
if( condition){
    code;
}
// or condition false then executes the else inner code
else{
    code;
}
NOTE: the else part is optional if statement is perfect run without else ;


if else ladder;

if else ladder means we can use lot of conditions 
like follows ;

if (/* condition */)
{
    /* code */
}
else if (/* condition */)
{
    /* code */
}
else if (/* condition */)
{
    /* code */
}
else if (/* condition */)
{
    /* code */
}
else{
    code;
}


nested if statement;
inside the if statement another if is called nested if statement


if (/* condition */)
{
    if (/* condition */)
    {
        /* code */
    }
    
    /* code */
}

