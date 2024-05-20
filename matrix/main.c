#include <stdio.h>
#include <stdlib.h>

int main()
{
   int matrixOne[3][2];
   int matrixTwo [2];
   int arr [3][1];

   for(int row=0;row<3;row++){
        for(int col=0;col<2;col++){
            printf("Enter Number For MatrixOne(%i,%i)\n",row,col);
            scanf("%i",&matrixOne[row][col]);
        }
   }

   for(int i=0;i<2;i++){
     printf("Enter Number For MatrixTwo (%i)\n",i);
     scanf("%i",&matrixTwo[i]);
   }

   for(int i=0;i<3;i++){
        for(int j=0;j<1;j++){
           arr[i][j] = matrixOne[i][j]*matrixTwo[j]+matrixOne[i][j+1]*matrixTwo[j+1];
        }
   }

     for(int i=0;i<3;i++){
        for(int j=0;j<1;j++){
           printf("%i\t",arr[i][j]);
        }
   }



    return 0;
}
