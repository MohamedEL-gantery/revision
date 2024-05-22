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
    int size=1;

    struct Employee *empPtr=malloc(size*sizeof(struct Employee));

    empPtr[0].id=1;
    empPtr[0].age=22;
    strcpy(empPtr[0].name,"mohamed");

    printf("%i\n", empPtr[0].id);
    printf("%i\n", empPtr[0].age);
    printf("%s\n", empPtr[0].name);


    return 0;
}
