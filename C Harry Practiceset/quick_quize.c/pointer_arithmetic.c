#include <stdio.h>

int main()
{
    int a;
    int *ptr = &a;
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The address of a after increment is %u\n", ptr);
    ptr--;
    printf("The address of a after decrement is %u\n", ptr);

    
    return 0;
}