#include<stdio.h>
int main(){
    int arraySize=read_array_size();    //calling method & stores returned value
    int isvalid=validate_array_size(arraySize);     //passing 'arraySize'; int array_size=arraySize
    for(int i=4; i<arraySize; i++){
    if (isvalid==0){
        printf("invalid size....");
    }
    i--;
}
}
//read array SIZE from KB  
int read_array_size(){
    int size;    //local variable
    printf("enter the array size[>4]:");
    scanf("%d",&size);
    return size;

int validate_array_size(int array_size){
    if(array_size>4){
        return 1;
    }
    return 0;
}

}