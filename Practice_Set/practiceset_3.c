// #include <stdio.h>
// // its calculates the 3 subjects marks and convert into percent
// // and output will be failed or passed as condition
// int main()
// {
//     int marks = 300, math, science, IT, total;
//     printf("Enter Maths Marks\n");
//     scanf("%d", &math);

//     printf("Enter science Marks\n");
//     scanf("%d", &science);

//     printf("Enter IT Marks\n");
//     scanf("%d", &IT);

//     total = (math + science + IT) * 100 / marks;

//     if (math < 35 || science < 35 || IT < 35)
//     {
//         printf("You Got %.2f %% You are Failed\nBetter Luck Next Time", (float)total);
//     }
//     else if (total > 35)
//     {
//         printf("You Got %.2f %%   & You are passed !", (float)total);
//     }

//     return 0;
// }

// Tax calculator
#include <stdio.h>

int main()
{
    int amount, total=0;
    printf("Enter your Annual Income Amount to calculates Tax\n");
    scanf("%d", &amount);

    if (amount > 250000 && amount <= 500000)
    {
        total = total + 0.5 * (amount - 250000);
         printf("your Tax is 5 percent for %d R.s", total);
    }

    else if (amount >= 500000 && amount <= 1000000)
    {
        total = total + 0.20 * (amount - 250000);
        printf("your Tax is 20 percent for %d R.s", total);
    }

    else if (amount >= 1000000)
    {
        total = total + 0.30 * (amount - 250000);
        printf("your Tax is 30 percent for %d R.s", total);
    }

    else if (amount < 250000)
    {
        printf("Your annual income is less than 250000 you are Tax free!");
    }

    return 0;
}

//create a program to check whether year leap or not
// If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
// If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
// If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
// The year is a leap year (it has 366 days).
// The year is not a leap year (it has 365 days).

// #include <stdio.h>

// int main()
// {
//     int year;

//     printf("Enter a year to check leap or not \n");
//     scanf("%d", &year);

//
//     if (year % 4 == 0)
//     {
//         printf("%d is a leap year\n", year);
//         printf("And its contain 366 days in year");
//     }
//     else
//     {
//         printf("%d is not a leap year\n", year);
//         printf("And its contain 365 days in year");
//     }

//     return 0;
// }

//check character entered by the user is lowercase or not

// #include <stdio.h>

// int main()
// {
//     char ch;
// printf("\nEnter a character to identify its lowercase or not\n");
// scanf("%c", &ch);

// if (ch >= 97 && ch <= 122 )
// {
//     printf("%c is a lowercase !\n");
// }
// else{
//     printf("%c is a uppercase ! \n");

// }

//     return 0;
// }

// Check which is the greater number between 4 numbers entered by user
// #include <stdio.h>

// int main()
// {
//     int num1, num2, num3, num4;
//     printf("Enter the first number you want :\n");
//     scanf("%d", &num1);
//     printf("Enter the second number you want :\n");
//     scanf("%d", &num2);
//     printf("Enter the Third number you want :\n");
//     scanf("%d", &num3);
//     printf("Enter the fourth number you want :\n");
//     scanf("%d", &num4);

//     if (num1 < num4 && num2 < num4 && num3 < num4)
//     {
//         printf("\n%d is greater number\n", num4);
//     }
//     else if (num1 < num2 && num4 < num2 && num3 < num2)
//     {
//         printf("\n%d is greater number\n", num2);
//     }
//     else if (num3 < num1 && num2 < num1 && num4 < num1)
//     {
//         printf("\n%d is greater number\n", num1);
//     }
//     else if (num1 < num3 && num2 < num3 && num4 < num3)
//     {
//         printf("\n%d is greater number\n", num3);
//     }
//     else
//     {
//         printf("Enter Each Different valid numbers!\n");
//     }
//     return 0;
// }