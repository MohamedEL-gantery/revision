#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size=5;
    int arr[size];

    for(int i=0;i<size;i++){
    printf("enter number\n");
    scanf("%i",&arr[i]);
    }

    int num;
    printf("enter number to search: ");
    scanf("%i",&num);

    // all of index
    for(int i=0;i<size;i++){
    if(arr[i]== num){
    printf("the index of number is %i\n",i);
    }
    }

    // first index
    for(int i=0;i<size;i++){
    if(arr[i]== num){
    printf("the index of number is %i\n",i);
    break;
    }
    }

    return 0;
}
