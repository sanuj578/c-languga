#include<stdio.h>
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int i,j,k;
    int t=0;
    int x=15;
    for(i=0;i<=8;i++){
        for(j=i+1;j<=8;j++){
            for(k=j+1;k<=8;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    t++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("totsl number of pairs=%d",t);
    return 0;
}