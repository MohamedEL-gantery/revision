#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int *ptr;
    ptr=&x;

    int* *ptrp;
    ptrp=&ptr;


    printf("Enter Value :\n");
    scanf("%i",&x);

    printf("%i\n",x);
    printf("%i\n",ptr);
    printf("%i\n",*ptr);
    printf("%i\n",&ptr);
    printf("%i\n",ptrp);
    printf("%i\n",&ptrp);
    printf("%i\n",*ptrp);
    printf("%i\n",**ptrp);



    return 0;
}
