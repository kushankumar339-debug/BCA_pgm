#include<stdio.h>
int main(){
    //char name[7]="kushan";
    //printf("name : %s\n",name);

    //char first[5];
    //printf("enter your first name: ");
    //scanf("%29s",&first);
    //printf("hello, %s!",first);
    //return 0;

    //char name[30];
    //printf("enter your first name");
    //fgets(name,sizeof(name),stdin);
    //printf("name:%10s",name);
    //return 0;

    char word[]="program";
    for(int i = 0;word[i] != '\0';i++){
        printf("word[%d] = %c\n", i, word[i]);
    }
}