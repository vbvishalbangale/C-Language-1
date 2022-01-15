// #include <stdio.h>

// int main()
// {
//     int a=10;
//     int *ptr=&a;
//     printf("The address of veriable a is %u\n",&a);
//     printf("The value of veriable a is %d\n",*ptr);
//     return 0;
// }

// #include <stdio.h>

// void printadd(int i)
// {

//     printf("the address of veriable i is %u\n", &i);
// }
// int main()
// {
//     int i = 5;
//     printf("The address of veriable i is %u\n", i);
//     printadd(i);
//     printf("The address of veriable i is %u\n", &i);

//     return 0;
// }

// #include <stdio.h>

// int _10times(int *a){

// *a = 100;
// return *a;

// }
// int main()
// {
//     int a=10;
//     printf("The value of a is %d \n",a);
//     printf("The value of a is function calling now : %d\n",_10times(&a));
//     printf("The value of a after function call : %d\n",a);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i=10;
//     int *ptr_1=&i;
//     int **ptr_2=&ptr_1;

//     printf("The value of i is %d\n",**ptr_2);
//     return 0;
// }

// solve problem 3 using call by value and you 
// notice it cannot change main variable value
#include <stdio.h>

int _10times(int a){

 
return a=33333;

}
int main()
{
    int a=10;
    printf("The value of a is %d \n",a);
    printf("The value of a is function calling now : %d\n",_10times(a));
    printf("The value of a after function call : %d\n",a);
    return 0;
}