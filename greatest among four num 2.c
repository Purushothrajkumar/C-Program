#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter the value of a:");
	scanf("%d",&a);
    printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter the value of c:");
	scanf("%d",&c);	
	printf("enter the value of d:");
	scanf("%d",&d);
	if(a>b && a>c)
	{
		if(a>d)
		{
			printf("A is greater");
		}
		else
		{
			printf("D is greater");
		}
	}
    else
    {
    	if(b>c && b>d)
       {
	       printf("B is greater");
	   }
	   else
	   {
	   	 printf("D is greater");
	   }
    }
}
