#include<stdio.h>
int main ()
{
    int ram ,shyam ,sita;
    printf("enter the ram Age=");
    scanf("%d",&ram);
    printf("enter the shyam Age=");
    scanf("%d",&shyam);
    printf("enter the sita  Age=");
    scanf("%d",&sita);
    if(ram>shyam && ram>sita){
        printf("ram is youngest");
    }
    if (shyam>ram && shyam >sita ){
        printf("shyam is youngest");
    }
     if (sita >ram && sita >shyam){
        printf("sita is youngest");
    }
    else{
        printf("equal agg");
    }
    return 0;
}