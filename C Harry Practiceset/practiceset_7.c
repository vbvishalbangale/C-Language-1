/* create an array of 10 numbers verify using pointer
arithmetic that (ptr +2 ) points to the third element 
where ptr is a pointer pointig to the first element of the array
*/

// #include <stdio.h>

// int main()
// {
//     int array[10];

//     int *ptr = &array[0];
//     // i can also write  int *ptr=array; and both are same
//     ptr = ptr + 2;

//     if (ptr == &array[2])
//     {
//         printf("Pointer points to exact location\n");
//     }
//     else
//     {
//         printf("Pointer not pointing to the location\n");
//     }

//     return 0;
// }

//Q.2  If s[3] is a 1-D array of integers then *(s+3)
// refers to the third element:
// true , false or depends
// ans: false because array index in started from 0
// and hence it will point to the fourth element and this dosn't have 4th element
// so it will produce error

// Q.3 Write a program to create an array of 10 integers and store
// multiplication table of 5 in it

// #include <stdio.h>

// int main()
// {
//     int table[10];

//     for(int i=0;i<10;i++){
//         table[i]=5*(i+1);
//     }
//     for(int i=0;i<10;i++){
//         printf("5X%d = %d\n",i+1,table[i]);
//     }
//     return 0;
// }

// Q.4 repeat problem 3 for a general input provided by the user using scanf

// #include <stdio.h>

// int main()
// {
//     int table[10];
//     int num;
//     printf("Enter a number to get multiplication table of it\n");
//     scanf("%d",&num);

//     for(int i=0;i<10;i++){
//         table[i]=num*(i+1);
//     }
//     for(int i=0;i<10;i++){
//         printf("%dX%d = %d\n",num,i+1,table[i]);
//     }
//     return 0;
// }

// Q.5 write a program containing a function which reverses the array passed to it.

#include <stdio.h>

int arr_reverse(int *arr,int n){
int temp;
for (int i = 0; i < n/2; i++)
{
    temp =arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
}

}
int main(){

int veriable;
    int arr[6]={1,3,5,7,9,11};

    arr_reverse(arr,6);
    for(int i=0; i<7; i++){
       printf("The value of %d array is : %d \n",i,arr[i]);
    }

    return 0;
}
