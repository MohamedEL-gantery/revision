#include <stdio.h>
#include <stdlib.h>

void swap(int x,int y){
int tmp;
tmp=x;
x=y;
y=tmp;
}

void swapTwo(int* x,int* y){
int tmp;
tmp=*x;
*x=*y;
*y=tmp;
}

int main()
{
    int x=5;
    int y=4;

    swap(x,y);
    printf("Pass by value \n");
    printf("X :%i\n",x);
    printf("Y :%i\n",y);

    printf("-------------\n");

    swapTwo(&x,&y);
    printf("Pass by reference \n");
    printf("X :%i\n",x);
    printf("Y :%i",y);


    return 0;
}
