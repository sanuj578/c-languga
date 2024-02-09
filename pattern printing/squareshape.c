#include<stdio.h>
int main()
{
    int n,m;
    printf("enter number of rows :  ");
    scanf("%d",&n);
    printf("enter number of column : ");
    scanf("%d",&m);
    int x ,y;
    for( x=1;x<=n;x++){
        for( y=1;y<=m;y++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}