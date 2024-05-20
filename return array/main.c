#include <stdio.h>
#include <stdlib.h>

int*returnArray()
{
    static int arr[5]={1,2,3,4,5};
    return arr;
}

int main()
{
    int *ptr=returnArray();

    for(int i=0;i<5;i++){
        printf("%i\n",ptr[i]);
    }

    return 0;
}
