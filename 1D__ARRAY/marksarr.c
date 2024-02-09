#include<stdio.h>
int main(){
    int arr[10]={95,90,31,25,100,50,15,89,97,30};
    int i;
    for(i=0;i<10;i++){
        if(arr[i]<35){
            printf("%d  ",i);
        }

    }
return 0;
}