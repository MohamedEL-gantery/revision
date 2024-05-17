#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row =3;
    int col=4;
    int arr [row][col];
    float sum =0;
    float avg=0;


    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter Number of 2d array (%i,%i)\n",i,j);
            scanf("%i",&arr[i][j]);
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
    }

    avg=sum/4;
    printf("Average of col is :%f",avg);



    return 0;
}
