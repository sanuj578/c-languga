#include<stdio.h>
void even(int x){
    int i;
 
     int sum=0;
     int sumx=0;
    for(i=1;i<=x;i++){
       if(i%2==0){
           
         printf("%d   ",i);
             sum=sum+i;
        }
        else{
            printf("%d   ",i);
            sumx =sumx+i;
        }
      
         
      
    }
     printf(" sum of even number =%d\n ",sum);
    printf(" sum of odd number =%d ",sum);
    return  ;
}
int main(){
    int n;
    printf("enter the number =");
    scanf("%d",&n);
    even(n );

}