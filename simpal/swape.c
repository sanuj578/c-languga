#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter the x number=");
	;scanf("%d",&x);
	printf("enter the y number=");
	scanf("%d",&y);
	printf("enter the z number=");
	scanf("%d",&z);
    int p;
	p=x;
    x=y;
    y=z;
    z=p;
	printf("enter the no x %d\n",x);
	printf("enter the no y %d\n",y);
	printf("enter the no z %d\n",z);
	return 0;
}