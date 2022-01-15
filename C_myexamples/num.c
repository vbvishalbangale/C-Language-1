#include <stdio.h>

int main()
{
    int a,i=0;
    printf("Enter the number ");
    scanf("%d",&a);

   do
   {
       printf("%d",a);
       a++;
   } while (a>i);
   
    
     return 0;
}