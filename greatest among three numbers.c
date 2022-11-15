#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a:");
	scanf("%d",&a);
    printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter the value of c:");
	scanf("%d",&c);	
	if(a>b)
	{
		if(a>c)
		{
			printf("A is greater");
		}
		else
		{
	       printf("C is greater");
		}
	}
	else
	{
	if(b>c)
	{
	   printf("B is greater");	
	}
	else
	{
	printf("C is greater");
    }
    }
}
