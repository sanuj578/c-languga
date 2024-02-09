#include<stdio.h>
int starepath(int n){
    if(n<=2) return n;
    int totalway=starepath(n-1)+starepath(n-2);
    return totalway;
}
int main(){
      int n;
    printf("enter the number =");
    scanf("%d",&n);
    int stare=starepath(n);
    printf("%d",stare);
    return 0;
}