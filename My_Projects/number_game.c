#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num,guess,nguesses=1;
    srand(time(0));
    num= rand()%10 + 1;

    do
    {
        printf("Guess the number between 1 to 10 \n");
        scanf("%d",&guess);

        if (guess<num)
        {
            printf("Enter Higher number please \n");
        }
        else if (guess>num)
        {
            printf("Enter Lower number please \n");
        }
        else{
            printf("You guessed it in %d attempts",nguesses);
        }
        nguesses++;
    } while (guess!=num);
    
    return 0;
}