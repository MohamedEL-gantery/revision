#include <stdio.h>
#include <stdlib.h>

void MultiplyArray(int *ptr){
for(int i=0;i<5;i++){
      printf("value of array at index %i: %i\n",i,ptr[i]);
}
}
int main()
{
  int arr[5]={1,2,3,4,5};
  MultiplyArray(arr);
    return 0;
}
