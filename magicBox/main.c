#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

void gotoxy( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}

int main()
{
//int arr [3][4]={0};

//for(int i=0;i<3;i++){
    //for (int j=0;j<4;j++){
    //printf("%i",arr[i][j]);
  //  }
//}

   //int size;
   //int row;
   //int col;
do
 {
    printf("Enter size for magic box\n");
    scanf("%i",&size);
    _flushall();
 }
while(size%2==0);

row=1;
col=size/2+1;
for(int i=1; i<=size*size;i++){
      gotoxy(col*size,row*size);
        printf("%i",i);

        if(i%size !=0){

            row--;
            col--;
            if(row<1){
                row=size;
            }
            if(col<1){
                col=size;
            }
        } else {
           row++;
        }
}


return 0;
}

