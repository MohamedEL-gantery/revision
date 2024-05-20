#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define Extended -32
#define Enter 13
#define Esc 27
#define up 73
#define down 81
#define home 71
#define end 79

void gotoxy( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}

void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);

}

int main()
{
    char menu[4][10]={"File","New","Display","Exit"};
    int cursor=0;
    int flag=10;
    char ch;

    do
    {
        system("cls");

        for(int i=0;i<4;i++){
            if(cursor == i){
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
                if(cursor <0){cursor=3;}
                break;
            case down:
                cursor++;
                if(cursor>3){cursor=0;}
                break;
            case home:
                cursor=0;
                break;
            case end:
                cursor=3;
                break;
            }
            break;
        case Enter:
            switch(cursor){
        case 0:
             system("cls");
                printf("File Page");
                getch();
                break;
        case 1:
             system("cls");
                printf("New Page");
                getch();
                break;
        case 2:
            system("cls");
            printf("New Display");
            getch();
            break;
        case 3:
            flag=0;
            break;
            }
            break;
            case Esc:
            flag=0;
            break;
        }
    }
    while(flag ==10);

    return 0;
}
