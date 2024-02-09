#include<stdio.h>
int main(){
    int n;
    int i;
    
    
    for(n=2; n<=100; n++){
         int flag =0;// Reset flag for each number
        for(i=2; i<n; i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",n);
        }
    }
    return 0;
}
