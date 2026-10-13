#include <stdio.h>
int factorial(int number){
    if(number ==0)
    return 1;
    return number * factorial(number -1);
    }

int main(){
    int number = 5;
    printf("%d! =%d\n",number,factorial(number));
    return 0;
}