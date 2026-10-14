#include<stdio.h>
int main(){
    int x=10;  //integer variable x which stores x
    int *p;    //declaring a pointer
    p=&x;       //storing address of another variable in pointer p

    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",p);

.}