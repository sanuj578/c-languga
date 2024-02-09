#include<stdio.h>
int main (){
    int i;
    int sumodd=0,sumeven=0;
    int arr[7]={1,2,3,4,5,6};
    for(i=1;i<7;i++){
        if(i%==0){
            sumeven=sumeven+arr[i];

        }
        else{
            sumodd=sumodd+arr[i];
        }
        
    }
    printf("sum of even=%d,sum of odd=%d",sumeven,sumodd);
        int diff=sumodd-sumeven;
        printf("diffrent of =%d",diff);


return 0;
}