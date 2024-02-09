#include<stdio.h>
aad (){
    int n;
    printf("enter the number =");
    scanf("%d",&n);
    int m;
    printf("enter the number =");
    scanf("%d",&m);
  int sum =n+m;
    printf("%d",sum);
    }
    even (){
    int p;
    printf("enter the number =");
    scanf("%d",&p);
    if(p%2==0){
        printf("even ");
    }
    else{
        printf("odd");
    }
    
    return ;
}
    int main(){
   aad();
   even();
    return 0;


}