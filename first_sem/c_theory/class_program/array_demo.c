//pgm to store and display 5 subjects mark
#include<stdio.h>
int main(){
    int my_marks[5];                 // integer array of size 3
    int sub_marks[5];    //declares an array 'sub_marks'
    // with SIZE 5 of 'int' type
    //storing data/ array initialization - array_name[index]=data/value;
    sub_marks[0]=80;   //stores '80' in an array position whose index is '0'
    sub_marks[1]=78;
    sub_marks[2]=68;
    sub_marks[3]=58;
    sub_marks[4]=88;   //static array initialization
    // fetch first array element from 'sub_mark'
    printf("first subject mark: %d\n",sub_marks[0]);
    //dyanamic initialization of 'my_marks'

    for(int i=0; i < 5; i++){
    printf("enter %d subject mark:[int data]",i+1);
    scanf("%d",&my_marks[i]);   //stored in first location
    }
    printf("\n");
    printf("first subject marks : %d\n",sub_marks[0]);
    printf("second subject marks: %d\n",sub_marks[1]);
    printf("third subject marks : %d\n",sub_marks[2]);
    printf("fourth subject marks: %d\n",sub_marks[3]);
    printf("fifth subject marks : %d\n",sub_marks[4]);


}