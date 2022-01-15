#include <stdio.h>

void print_star(int num);

int main()
{
    int num;

    printf("\nEnter the number of lines\nyou want to print odd star pattern :\n");
    scanf("%d", &num);

    print_star(num);
    return 0;
}

void print_star(int num)
{
    // for example n = 3 ;
    // *
    // ***
    // ***** (like odd sequence)

    if (num == 1)
    {
        printf("*\n");
        return;
    }

    else
    {
        // before i was using (2*num-(num-1)) for first for loop condition
        // So after notice a formula i realize this is a simple formula
        // (num + 1)
        for (int i = 0; i < (num + 1); i++)
        {
            for (int j = 0; j < ((2 * i) - 1); j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}