#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[10];

   for(int i=0;i<10;i++){
    printf("enter number\n");
    scanf("%i",&arr[i]);
   }

   for(int i=0;i<10;i++){

        for(int j=i+1; j<10;j++){
         if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }

   }

   for(int i=0;i<10;i++){
    printf("%i\t",arr[i]);
   }
    return 0;
}
