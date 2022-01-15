// Question_1
// #include <stdio.h>
// // This program calculates The area of rectangle
// // with the help user input value of length & width
// int main()
// {
//     int length , width;
//     printf("Enter the length of rectangle : ");
//     scanf("%d",&length);

//     printf("Enter the width of rectangle : ");
//     scanf("%d",&width);

//     printf("The Area of rectangle is %d\n",length*width);

//     return 0;
// }


// Question_2
// #include <stdio.h>
// // This program calculates The area of circle
// // With the help of user input radius value
// // using formula Pi * radius * radius
// int main()
// {
//     int radius;
//     float PI = 3.14159265;

//     printf("Enter the value of radius : ");
//     scanf("%d",&radius);

//     printf("The Area of circle is %f",radius*radius*PI);
//     return 0;
// }

// Question_3
// #include <stdio.h>
// // This program calculates The volume of cylinder
// // With the help of user input radius and height value
// // using formula Pi * radius * radius * height
// int main()
// {
//     int radius;
//     float PI = 3.14159265;
//     int height; 

//     printf("Enter the value of radius : ");
//     scanf("%d",&radius);

//     printf("Enter the value of height : ");
//     scanf("%d",&height);

//     printf("The Volume of cylinder is %f",radius*radius*PI*height);
//     return 0;
// }



// Question_4
// #include <stdio.h>
// // This program converts user input value of celsius into fahrenheit
// int main()
// {
//     int celsius;
//     float formula;

//     printf("Enter the value of celsius : ");
//     scanf("%d",&celsius);

// formula = (celsius * 1.8 )+32;

//     printf("The value of celsius into fahrenheit is %f \n",formula);
//     return 0;
// }


// Question_5

// #include <stdio.h>
// // This program calculates simple interest rate 
// int main()
// {
//     int amount;
//     int year = 1;
//     int rate = 5;
//     int simple_interest;
//     printf("Enter amount you want for 1 year\nwith intrest rate of %%5 : ");
//     scanf("%d", &amount);

//     simple_interest = (amount * rate * year) / 100;

//     printf("The value of %%5 interest rate is %d\n", simple_interest);
//     printf("The total amount of R.s you have to pay %d\n ",simple_interest+amount);
//     return 0;
// }