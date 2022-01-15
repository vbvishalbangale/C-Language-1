#include <stdio.h>
#include <math.h>
int main(){

    int side;
    printf("Enter the value of side : ");
    scanf("%d",&side);

    printf("The Area of a square is %d\n",(int)pow(side,2));
    return 0;
}