// #include <stdio.h>

// int main()
// {

//     char str[] = {'S', 'h', 'o', 'e', 'b', '\0'};
//     // char str[] = "Shoeb";
//     char *ptr = str;

//     while (*ptr != '\0')
//     {
//         printf("%c", *ptr);
//         ptr++;
//     }

//     return 0;
// }

// convienient way to print strings

// #include <stdio.h>

// int main()
// {

//     // int a =4;
//     // printf("%d",a);

//     char *ptr = "Shoeb bhai";
//     printf("%s", ptr);

//     return 0;
// }


// input string from a user

// #include <stdio.h>

// int main(){

//     char s[33];
//     printf("Enter your name : ");
//     // scanf("%s",s);
//     gets(s);
//     puts(s);
//     printf("Your name is %s",s);
//     return 0;
// }

// string functions 

#include <stdio.h>
#include <string.h>

int main(){

    char *st = "Shoeb";
    int a = strlen(st);
    printf("The length of string st is %d\n",a);
    return 0;
}