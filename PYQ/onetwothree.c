#include<stdio.h>
int main(){
   // int arr[9]={1,2,3,4,5,6,7,8,9};
    int i,j,k;
    int t=0;
    int x=15;
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            for(k=1;k<=3;k++){
               // if(arr[i]+arr[j]+arr[k]==x){
                    t++;
                    printf("(%d,%d,%d)\n",i,j,k);
               // }
            }
        }
    }
    printf("totsl number of pairs=%d",t);
    return 0;
}