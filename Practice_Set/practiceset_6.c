/*write a program to print the address of a variable 
use this address to get the value of this variable*/

// #include <stdio.h>

// int main()
// {
//     int a=75;
//     int *pointer=&a;

//     printf("The address of a is %u\n",&a);// or use pointer
//     printf("The value of a is %u\n",*pointer);

//     return 0;
// }

// write a program having a variable i. print the  address of i pass this variable to a function and print its address are these addresses same why ?

// #include <stdio.h>

// int address(int a)
// {
//     return printf("The Duplicate address of i is %u\n", &a);
// }
// int main()
// {
//     int i=100;
//     printf("The value of i is %d\n",i);
//     printf("The Original address of i is %u\n", &i);
//     address(i);
//     return 0;
// }

// Write a program to change the value of a variable to ten times of its current value write a function and pass the value by reference

// #include <stdio.h>

// int num_change(int *a){

// return (*a*10);

// }
// int main()
// {
//     int num_value;
//     printf("Enter a number to change its value 10 times greater than its current value\n");
// scanf("%d", &num_value);

//     printf("The value of number is %d Before call by reference\n",num_value);
//     printf("The value of number is %d After call by reference\n",num_change(&num_value));

//     return 0;
// }

// write a program to print the value of a variable i
// by using pointer to pointer type of veriable

// #include <stdio.h>

// int main()
// {
//     int i = 999;

//     int *ptr;
//     int **ptr_2;

//     ptr = &i;
//     ptr_2 = &ptr;

//     printf("The value of i is %d using pointer to pointer type\n",**ptr_2);

//     return 0;
// }


// Write a program to change the value of a variable to ten times of its current value write a function and pass the value by value 

// #include <stdio.h>

// int num_change(int a){
// a =59;
//  a=35;
//  a=3333;
 
//  a*10;

// }
// int main()
// {
//     int num_value;
//     printf("Enter a number to change its value 10 times greater than its current value\n");
// scanf("%d", &num_value);

//     printf("The value of number is %d Before call by value \n",num_value);
//     printf("The value of number is %d After call by value \n",num_change(num_value));

//     return 0;
// }