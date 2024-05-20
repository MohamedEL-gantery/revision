#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee{
int id;
int age;
char name[30];
};

int main()
{
    struct Employee el;
    struct Employee *ptr;

    ptr=&el;

    ptr->id=1;
    ptr->age=22;
    strcpy(ptr->name,"mohamed");



    system("cls");

    printf("Employee id : ");
    printf("%i\n",ptr->id);

    printf("Employee age: ");
    printf("%i\n",ptr->age);

    printf("Employee name: ");
    puts(ptr->name);


    return 0;
}
