#include<stdio.h>
void even(int x){
    int i;
    for(i=1;i<=x;i++){
        if(i%2==0){
            printf("%d  ",i);
        }
    }
    
    return;
}
int main(){
    int n;
    printf("enter the number =");
    scanf("%d",&n);
    even(n);

}