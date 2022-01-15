// #include <stdio.h>
// // question no 1
// // This program get input the value of length & breadth by user
// // and calculates area of a rectangle 

// int main()
// {
//      int length,breadth;
//      printf("Enter length of rectangle : ");
//      scanf("%d",&length);

//      printf("Enter breadth of rectangle : ");
//      scanf("%d",&breadth);

//      printf("The Area of a rectangle is %d\n",length*breadth);
//     return 0;
// }

// #include <stdio.h>
// // question no 2 
// // This program calculates area of circle 


// int main()
// {
//     int radius;
//     float PI = 3.14159265;

//     printf("Enter the value of radius : ");
//     scanf("%d",&radius);

//     printf("The Area of a circle is %f\n",radius*radius*PI);


//     return 0;
// }

// modify above circle program to calculates the volume of cylinder
// #include <stdio.h>

// int main()
// {
//     int radius,height;
//     float PI = 3.14159265;

//     printf("Enter the value of radius : ");
//     scanf("%d",&radius);
//     printf("Enter the value of height : ");
//     scanf("%d",&height);

//     printf("The Area of a circle is %f\n",radius*radius*PI*height);


    
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     // This program converts celsius to fahrenheit
//     int celsius;
//     float formula;
//     printf("Enter the value of celsius : ");
//     scanf("%d",&celsius );

//     formula= (celsius*1.8)+32;

//     printf("The value of %d celsius is %f fahreheit\n",celsius,formula);


//     This program converts fahreheit to celsius

//     float fahreheit;
//     float celsiusFormula;

//     printf("Enter the value of fahrenheit : ");
//     scanf("%f",&fahreheit);

// celsiusFormula= (fahreheit -32)/1.8;
//     printf("The value of %f fahrenheit to celsius is %f ",fahreheit,celsiusFormula);

//     return 0;
// }



// This program calculates the simple interest rate

#include <stdio.h>

int main()
{
    int amount,year=1,rate=5 ;
    int formula;
    
printf("Enter the R.s amount you want for 1 year\nwith the interest of %%5 : \n");
scanf("%d",&amount);

formula = (amount*year *rate)/100;
printf("The value of interest rate is : %d\n",formula);
printf("The total amount you have to pay : %d\n",formula+amount);

    return 0;
}