
#include <stdio.h>
#include <stdlib.h>

int power(int base ,int _power){

if(_power == 0){
    return 1;
}else{
 return base* power(base,_power-1);
}

}

int main()
{
    int x=2;
    int y=3;
    int result=power(x,y);

    printf("%i",result);

    return 0;
}
