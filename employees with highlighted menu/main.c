#include<string.h>
#include<stdio.h>
#include<windows.h>

#define Extended -32
#define Enter 13
#define Esc 27
#define up 73
#define down 81
#define home 71
#define end 79

void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

void gotoxy( int column, int line )
{

    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}
struct Employee{
int id;
char name[30];
int salary;
int age;
int commission;
int deduction;
};

struct Employee el[10];

void createNewEmployee(int index){
    system("cls");

    gotoxy(10,15);
    printf("id:");

    gotoxy(10,22);
    printf("name:");

    gotoxy(10,29);
    printf("age:");

    gotoxy(30,35);
    printf("salary:");

    gotoxy(30,42);
    printf("commission:");

    gotoxy(30,50);
    printf("deduction:");

    gotoxy(23,10);
    scanf("%i",&el[index].id);
    _flushall();

    gotoxy(26,15);
    gets(el[index].name);
    _flushall();

    gotoxy(24,20);
    scanf("%i",&el[index].age);
    _flushall();

    gotoxy(48,10);
    scanf("%f",&el[index].salary);
    _flushall();

    gotoxy(46,15);
    scanf("%f",&el[index].commission);
    _flushall();

    gotoxy(46,20);
    scanf("%f",&el[index].deduction);
    _flushall();

    }

void displayAll(){
    for(int i=0;i<10;i++){
        if(el[i].id!=0){
            printf("\nthe id of employee %i is=> %i\n",i+1,el[i].id);
            printf("the name of employee %i is=> ",i+1);
            puts(el[i].name);
            printf("the age is of employee %i=> %i\n",i+1,el[i].age);
            printf("the salary is of employee %i=> %f\n",i+1,el[i].salary);
            printf("the commission  of employee %i is=> %f\n",i+1,el[i].commission);
            printf("the deduction of employee %i is=>%f\n",i+1,el[i].deduction);
            printf("the net salary of employee %i is=>%f\n",i+1,((el[i].salary)+(el[i].commission))-(el[i].deduction));
            printf("--------------------------------------------------------------------------------------------------");
            }
        }
    }

void dispalyById(int id){
    for(int i=0;i<10;i++){
        if(el[i].id==id){
            printf("\nthe id of employee %i is=> %i\n",i+1,el[i].id);
            printf("the name of employee %i is=> ",i+1);
            puts(el[i].name);
            printf("the age is of employee %i=> %i\n",i+1,el[i].age);
            printf("the salary is of employee %i=> %f\n",i+1,el[i].salary);
            printf("the commission  of employee %i is=> %f\n",i+1,el[i].commission);
            printf("the deduction of employee %i is=>%f\n",i+1,el[i].deduction);
            printf("the net salary of employee %i is=>%f\n",i+1,((el[i].salary)+(el[i].commission))-(el[i].deduction));
            printf("--------------------------------------------------------------------------------------------------");
            }
        }
    }

void dispalyByName(char eName[30]){
        for(int i=0;i<10;i++){

         if((strcmp(el[i].name,eName))==0&&el[i].id!=0)
            {
            printf("\nthe id of employee %i is=> %i\n",i+1,el[i].id);
            printf("the name of employee %i is=> ",i+1);
            puts(el[i].name);
            printf("the age is of employee %i=> %i\n",i+1,el[i].age);
            printf("the salary is of employee %i=> %f\n",i+1,el[i].salary);
            printf("the commission  of employee %i is=> %f\n",i+1,el[i].commission);
            printf("the deduction of employee %i is=>%f\n",i+1,el[i].deduction);
            printf("the net salary of employee %i is=>%f\n",i+1,((el[i].salary)+(el[i].commission))-(el[i].deduction));
            printf("--------------------------------------------------------------------------------------------------");
            }
        }
    }


void deleteAll(){
         for(int i=0;i<10;i++){
         el[i].id=0;
         el[i].age=0;
         el[i].salary=0;
         //[i].name="";
         el[i].commission=0;
         el[i].deduction=0;
        }
        printf("All Employees Deleted Successfully \n");
    }

void deleteById(int deleteId){
     for(int i=0;i<10;i++){
        if(el[i].id==deleteId&&deleteId!=0){
            el[i].id=0;
            el[i].age=0;
            el[i].salary=0;
           //l[i].name=" ";
            el[i].commission=0;
            el[i].deduction=0;
            }
        }
        printf("Employee Deleted Successfully \n");

    }

void deleteByName(char deleteName[30]){
        for(int i=0;i<10;i++){
                if((strcmp(el[i].name,deleteName)==0)){
                    el[i].id=0;
                    el[i].age=0;
                    el[i].salary=0;
                   //l[i].name=" ";
                    el[i].commission=0;
                    el[i].deduction=0;
                }
        }

        printf("Employee Deleted Successfully \n");
    }

int main()
{
    char menu[8][20]={"New","Display ALL","Display By ID","Display By Name","Delete All","Delete By ID","Delete By Name","Exit"};
    int cursor=0;
    int index,deleteId,id;
    char eName[30],deleteName[30],ch;
    int flag=10;

    do
    {
        system("cls");

        for(int i=0;i<8;i++){
            if(cursor==i){
                textattr(5);
            }else{
                textattr(7);
            }
            gotoxy(15,15+i);
            printf("%s",menu[i]);
        }
         ch=getch();
         switch(ch){
            case Extended:
                ch=getch();
                switch(ch){
                case up:
                    cursor--;
                    if(cursor<0){cursor=7;}
                    break;
                case down:
                    cursor++;
                    if(cursor>7){cursor=0;}
                    break;
                case home:
                    cursor=0;
                    break;
                case end:
                    cursor=7;
                    break;
                }
                break;
            case Enter:
                switch(cursor){
            case 0:
                system("cls");
                printf("Choose index:n");
                scanf("%i",&index);
                createNewEmployee(index);
              _flushall();
                getch();
                break;
            case 1:
                 system("cls");
                displayAll();
                getch();
                break;
            case 2:
                system("cls");
                printf("Enter Id:\n");
                scanf("%i",&id);
                dispalyById(id);
                _flushall();
                getch();
                break;
            case 3:
                system("cls");
                printf("Enter Name: \n");
               gets(eName);
               dispalyByName(eName);
                _flushall();
                getch();
                break;
            case 4:
                system("cls");
                deleteAll();
                getch();
                break;
            case 5:
                system("cls");
                printf("Enter id:\n");
                scanf("%i",&deleteId);
                deleteById(deleteId);
             _flushall();
                getch();
                break;
            case 6:
                system("cls");
                printf("Enter name:\n");
                gets(deleteName);
                deleteByName(deleteName);
              _flushall();
                getch();
                break;
             case 7:
                flag=0;
                break;
                }

            break;
            case Esc:
                flag=0;
                break;
         }
    }
    while(flag==10);

    return 0;
}
