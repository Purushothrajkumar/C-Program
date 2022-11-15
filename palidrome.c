#include<stdio.h>
void main()
{
	int n,rev=0,temp,rem;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		rev=(rev*10)+rem;
		temp=temp/10;
	}
	if(n==rev)
	printf("palidrome");
	else
	printf("not a palidrome");
}
