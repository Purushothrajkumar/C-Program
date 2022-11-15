#include<stdio.h>
void main()
{
	int num,i,factor=0;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		factor++;
	}
	if(factor==2)
	printf("%d is a prime number",num);
	else
	printf("%d is not a prime number",num);
	
}
