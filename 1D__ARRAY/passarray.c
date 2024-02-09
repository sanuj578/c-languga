#include<stdio.h>
void array(int arr[]){
    arr[1]=109;
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf(" arr=%d\n",arr[1]);
    array(arr);
     printf("arr=%d",arr[1]);

    return 0;
}