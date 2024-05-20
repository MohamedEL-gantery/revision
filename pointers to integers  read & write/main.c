#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int *ptrOne;
    int *ptrTwo;
    ptrOne=&x;
    ptrTwo=&y;

    printf("Enter Your Value PtrOne :\n");
    scanf("%i",&x);

    printf("Enter Your Value PtrTwo :\n");
    scanf("%i",&y);


    printf("%i\n",*ptrOne);
    printf("%i",*ptrTwo);

    return 0;
}
