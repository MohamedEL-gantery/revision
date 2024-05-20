#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    int* ptr=arr;

    //v1
   /* for(int i=0;i<5;i++){
        printf("Enter Value of Array :\n");
        scanf("%i",ptr);
        ptr++;
    }
    ptr=arr;

    printf("Value is :\n");
    for(int i=0;i<5;i++){
        printf("%i \n",*ptr);
        ptr++;
    }
    ptr=arr;*/

    //v2
    /*for(int i=0;i<5;i++){
         printf("Enter Value of Array :\n");
         scanf("%i",ptr+i);
    }

    printf("Value is :\n");
    for(int i=0;i<5;i++){
        printf("%i \n",*(ptr+i));
    }*/

    //v3
    for(int i=0;i<5;i++){
         printf("Enter Value of Array :\n");
         scanf("%i",&ptr[i]);
    }

    printf("Value is :\n");
    for(int i=0;i<5;i++){
        printf("%i \n",ptr[i]);
    }

    return 0;
}
