#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

struct Empolyee {
int id;
char name[30];
int age;
int salary;
float commission;
float deduction;
};

void gotoxy( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}

int main()
{
    struct Empolyee el;

    gotoxy(10,10);
    printf("id :");

    gotoxy(10,15);
    printf("name :");

    gotoxy(10,20);
    printf("age :");

    gotoxy(30,10);
    printf("salary :");

    gotoxy(30,15);
    printf("commission :");

    gotoxy(30,20);
    printf("deduction :");

    gotoxy(15,10);
    scanf("%i",&el.id);
    _flushall();

    gotoxy(19,15);
    gets(el.name);
    _flushall();

    gotoxy(21,20);
    scanf("%i",&el.age);
    _flushall();

    gotoxy(40,10);
    scanf("%f",&el.salary);
    _flushall();

    gotoxy(44,15);
    scanf("%f",&el.commission);
    _flushall();

    gotoxy(47,20);
    scanf("%f",&el.deduction);
    _flushall();

    system("cls");
    printf("netsalary : %f \n",(el.salary+el.commission)-el.deduction);
    printf("id : %i \n",el.id);
    printf("name : %s \n",el.name);
    printf("age : %i \n",el.age);
    printf("salary : %i \n",el.salary);
    printf("commission : %f \n",el.commission);
    printf("deduction : %f \n",el.deduction);

    return 0;
}
