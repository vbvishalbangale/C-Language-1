#include <stdio.h>

int main(){

    int a[10];
    int *j = &a[0];

    printf("The value of j is %u\n",j);
    j++;
    printf("The value of j is %u\n",j);
    
    j = j - 1;
    printf("The value of j is %u\n",j);

    return 0;
}