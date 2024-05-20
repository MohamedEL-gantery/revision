#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char firstName [10];
    char lastName [10];
    char fullName [21];

    printf("Enter Your FirstName :\n");
    gets(firstName);

    printf("Enter Your LastName :\n");
    gets(lastName);

    strcpy(fullName,firstName);
    strcat(fullName," ");
    strcat(fullName,lastName);

    printf("Your FullName is :\n");
    puts(fullName);

    return 0;
}
