#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;

    printf("Enter size :\n");
    scanf("%i",&size);

    int* ptr=malloc(size* sizeof(int));

    system("cls");

    //v1
    for (int i=0;i<size;i++){
        printf("Enter value of :%i \n",i);
        scanf("%i",ptr+i);
    }

    system("cls");
    for (int i=0;i<size;i++){
      printf("value of :%i \n",i);
      printf("%i\n",*(ptr+i));
    }

    //v2
    /*for (int i=0;i<size;i++){
        printf("Enter value of :%i \n",i);
        scanf("%i",&ptr[i]);
    }

    system("cls");
    for (int i=0;i<size;i++){
      printf("value of :%i \n",i);
      printf("%i\n",ptr[i]);
    }*/

    return 0;
}
