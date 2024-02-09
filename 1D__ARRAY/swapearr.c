#include<stdio.h>
void array(int arr[]){
   int temp=arr[0];
   arr[0]=arr[1];
   arr[1]=temp;
}
int main(){
    int arr[2]={1,5};
    printf(" arr=%dand %d\n",arr[0],arr[1]);
    array(arr);
    printf(" arr=%dand %d\n",arr[0],arr[1]);

    return 0;
}