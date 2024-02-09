#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int i,j;
    int evensum =0;
    int oddsum=0;
    for(i=0;i<=6;i++){
        if(i%2==0){
            evensum=evensum+arr[i];
        }
        else{
            oddsum=oddsum+arr[i];
        }

    }
    int diff=evensum-oddsum;
    printf("%d",diff);
    return 0;
}