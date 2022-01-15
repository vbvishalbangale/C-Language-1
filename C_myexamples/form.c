#include <stdio.h>

int main()
{
    int name;
    char str_name[20];
    char str_class[10];
    printf("Enter your name : ");
    gets(str_name);

    char str_email[20];
    printf("Enter your email : ");
    gets(str_email);

    int mobile_no;
    printf("Enter your mobile no : +91 ");
    scanf("%d", &mobile_no);

 
    printf("Enter your class : ");
    gets(str_class);

    printf("\nYour all details are follows :\n");
    printf("Name : %s\n", str_name);
    printf("Email : %s\n", str_email);
    printf("Mobile no : +91 %d\n", mobile_no);
    printf("Class : %s\n", str_class);

    return 0;
}