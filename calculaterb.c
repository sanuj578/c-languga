#include<stdio.h>
int main()
{
	int  x;
	printf("enter the op");
	scanf("%c",&x);
	
	switch(x){
	case'1':{
            int x,y;
    printf("enter the number= ");
    scanf("%d",&x);
     printf("enter the number =");
    scanf("%d",&y);
    int sum;
    sum =x+y;
    printf("sum is number=%d",sum );
    
    break;
    }
    case'2':{

    int x,y;
    printf("enter the number= ");
    scanf("%d",&x);
     printf("enter the number =");
    scanf("%d",&y);
    int sum;
    sum =x-y;
    printf("sum is number=%d",sum );
  
}
    case'3':{
          int n;
    printf("enter the number=");
    scanf("%d",&n);
    if(n%3==0||n%5==0){
        printf("2 and 3 div");

    }
    else{
        printf(" not 2 nad 3 div");
        
    }

    }
    case'4':{
           int r,s,g;
    printf("enter the number=");
    scanf("%d",&r);
     printf("enter the number=");
    scanf("%d",&s);
     printf("enter the number=");
    scanf("%d",&g);
    if(r<s&&s<g){
        printf(" ram is smaller");
    }
    else if(s<r&&s<g){
        printf(" shaym is smaller");        
    }
    else{
        printf(" ghanshyam is smaller");

    }
    break;

    }
    case'5':{
            int n;
    printf("enter the number=");
    scanf("%d",&n);
    int x;
    for(x=n;x<=n*10;x=x+n){
        printf("%d",x);

    printf("\n");
    }
        
    }
    case'6':{
        
    }
		default:{
			printf("invilad");
	}
    
}
	return 0;	
}