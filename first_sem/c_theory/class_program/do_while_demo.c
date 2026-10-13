#include<stdio.h>
int main(){
    int choice,firstnumber,secondnumber,sum;
    printf("----welcome to my calculator------\n");
    printf("1. addition\n");
    printf("2. substraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    do{
    if(choice == 1){
         //addtion
        printf("enter the first number:");
        scanf("%d",&firstnumber);
        printf("enter the second number:");
        scanf("%d",&secondnumber);
        sum=firstnumber+secondnumber;
        printf("the sum is : %d\n",sum);
    }
    if(choice == 2){
        //substraction
        printf("enter the first number:");
        scanf("%d",&firstnumber);
        printf("enter the second number:");
        scanf("%d",&secondnumber);
        int difference=firstnumber-secondnumber;
        printf("the difference is : %d\n",difference);
    }
    if(choice == 3){
        //multiplication
        printf("enter the first number:");
        scanf("%d",&firstnumber);
        printf("enter the second number:");
        scanf("%d",&secondnumber);
        int multiplication=firstnumber*secondnumber;
        printf("the multiplication is : %d\n",multiplication);
    }
    if(choice == 4){
        //division
        printf("enter the first number:");
        scanf("%d",&firstnumber);
        printf("enter the second number:");
        scanf("%d",&secondnumber);
        int division=firstnumber/secondnumber;
        printf("the division is : %d\n",division);
        }
    else
        printf("invalid choice");
    
    }while(choice > 4);
        return 0;
    }