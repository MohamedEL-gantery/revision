#include <stdio.h>
#include <stdlib.h>

int factory(int num){

if(num == 1){
    return 1;
}else{
 return num*factory(num-1);
}

}

int main()
{
    int x=4;
    int result=factory(x);

    printf("%i",result);

    return 0;
}
