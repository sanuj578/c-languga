#include<stdio.h>
int main()
{
	int b,c;
	float a;
	char x;
	printf("enter the op");
	scanf("%c",&x);
	printf("enter the number ");
	scanf("%d%d",&b,&c);
	switch(x){
		case '+':{
		a=b+c;
		printf("%f",a);
		break;
	}
		case'-':{
		a=b-c;
		printf("%f",a);
		break;
	}
		case'*':{
		a=b*c;
		printf("%f",a);
		break;
	}
		case'/':{
		a=b/c;
		printf("%f",a);
		break;
	}
		default:{
			printf("invilad");
	}
}
	return 0;	
}