#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text [50];
    char ch;
    int i=0;

    printf("Enter your text :\n");

    while(i<=49 &&(ch=getche())!=13){
            text[i]=ch;
            i++;
    }

    text[i]='\0';

    printf("Reversed text: ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", text[j]);
    }


    return 0;
}
