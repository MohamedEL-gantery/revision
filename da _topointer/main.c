#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row;
    int col;

    printf("Enter row :\n");
    scanf("%i",&row);

    system("cls");

    printf("Enter col :\n");
    scanf("%i",&col);

   int**ptrArr=malloc(row*sizeof(int*));

    for(int i=0;i<row;i++){
        ptrArr[i]=malloc(col*sizeof(int));
    }

       system("cls");

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
             printf("enter number for row %i and col %i:",i,j);
             scanf("%i",&ptrArr[i][j]);
        }
    }

    system("cls");

     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("number for row %i and col %i is : ",i,j);
            printf("%i\n",ptrArr[i][j]);
        }
    }

    return 0;
}
