#include<stdio.h>
int main(){
    int i,j,k;
    int n;
    printf("enter thr odd number =");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
           
              
                    printf("*");
          
        }
         printf("\n");
    }
   
    return 0;
}