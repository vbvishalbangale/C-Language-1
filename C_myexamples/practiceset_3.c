#include <stdio.h>

int main()
{
    int physics, math, chemistry;
    printf("Enter Physics Marks\n");
    scanf("%d", &physics);

    printf("Enter chemistry Marks\n");
    scanf("%d", &chemistry);

    printf("Enter math Marks\n");
    scanf("%d", &math);

    float total = (physics + chemistry + math) / 3;

if ((total<40)|| physics<33||chemistry<33||math<33)
{
    printf("your percent is %f and you are passed", total);
}
else{
    printf("your percent is %f and you are failed", total);

}


    return 0;
}