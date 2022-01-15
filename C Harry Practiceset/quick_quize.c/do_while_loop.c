#include <stdio.h>

int main()
{
    int n;
    printf("Enter natural number : ");
    scanf("%d",&n);
    int i=0;
    do{
        printf("%d\n",i+1);
       i++;
    }while(i<n);
    return 0;
}