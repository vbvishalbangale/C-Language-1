// #include <stdio.h>
// // This program calculates multiplication table of a number
// int main()
// {
//     int num;
//     printf("Enter the number to make multiplication table of it\n ");
//     scanf("%d", &num);

//     printf("The Multiplication table of %d is follows :\n", num);

//     for(int i = 1; i<11; i++){

//         printf("%d X %d = %d \n",num,i,i*num);
//     }
//     return 0;
// }

// #include <stdio.h>
// // This program calculates multiplication table of a number In Reverse order
// int main()
// {
//     int num;
//     printf("Enter the number to make multiplication table of it in reverse order\n ");
//     scanf("%d", &num);

//     printf("The Reverse Multiplication table of %d is follows :\n", num);

//     for(int i = num; i; i--){

//         printf("%d X %d = %d \n",num,i,i*num);
//     }
//     return 0;
// }

// #include <stdio.h>
// //this program calculates the sum of total numbers from 0
// int main()
// {
//     int sum = 0, num;
//     printf("Enter the number for sum from 0\n");
//     scanf("%d", &num);
//     int i = 0;

    // Using while loop
    // while (i <= num)
    // {
    //     sum += i;
    //     i++;
    // }

    // Using do while loop

    // do{
    //     sum +=i;
    //     i++;

    // }while(i<=num);

    // Using for loop

    // for(;i<=num;i++){

    //     sum+=i;

    // }

//     printf("The total sum from 0 to %d  = %d", num, sum);

//     return 0;
// }


// #include <stdio.h>
// //This program calculates multiplication table as well as sum like below
// /*  
// 8 x 1 = 8    and sum 8 + 1 = 9
// 8 x 2 = 16   and sum 8 + 2 = 10
// .
// . and so on
// */
// int main()
// {
//     int num;
//     printf("Enter the number to make multiplication table of it\n ");
//     scanf("%d", &num);

//     printf("The Multiplication table of %d is follows :\n", num);

//     for(int i = 1; i<11; i++){

//         printf("%d X %d = %d    and also sum like  %d + %d = %d\n",num,i,i*num,num,i,num+i);
//     }
//     return 0;
// }

//This calculates factorial of a given number 
// #include <stdio.h>

// int main()
// {
//     int number,factorial=1;

//     printf("Enter a number to find factorial of \n");
//     scanf("%d", &number);
//using for loop
    // for (int i = 1; i <= number; i++)
    // {
    //     factorial*=i;
    // }

    //using while loop 
    // int i=1;
    // while (i<=number)
    // {
    //     factorial*=i;
    //     i++;
    // }

  //using do while loop 
//     do
//     {
//         factorial*=i;
//         i++;
//     } while (i<=number);
    
//     printf("The factorial of %d is %d \n", number,factorial);
//     return 0;
// }

//This program calculates prime number 

// #include <stdio.h>

// int main()
// {
//     int num;

//     printf("Enter a number to check its prime or not\n");
//     scanf("%d", &num);

// for (int i = 2; i <=num; i++)
// {
//     if (num%i==0)
//     {
//         printf("This is not a prime number\n");
//     }
//     else{
//         printf("This is a prime number\n");

//     }
// }


//     return 0;
// }