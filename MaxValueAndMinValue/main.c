#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    for(int i=0 ;i<10;i++){
        printf("Enter Number :\n");
        scanf("%i",&arr[i]);
    }

    int min =arr[0];
    int max=arr[0];
    for(int i=0 ;i<10;i++){
        if(arr[i]<min){
            min=arr[i];
            }
            if(arr[i]>max){
                max=arr[i];
            }
    }
   printf("Max Value is:%i\n",max);
   printf("Min Value is:%i\n",min);
    return 0;
}
