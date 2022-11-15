#include<stdio.h>
void main()
{
	int x,y,i,min;
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of y:");
	scanf("%d",&y);
	if(x>y)
	min=y;
	else
	min=x;
	for(i=1;i<=min;i++)
	{
		if(x%i==0 && y%i==0)
		printf("%d ",i);
	}
	
}
