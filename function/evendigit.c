#include<stdio.h>
void even(int x){
    int i;
    if(x%2==0){
        printf("even ");

    }
    else{
        printf("odd");
    }
    return;
}
int main(){
    int n;
    printf("enter the number =");
    scanf("%d",&n);
    even(n);
    return 0;
}
