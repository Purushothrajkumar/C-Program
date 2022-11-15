#include<stdio.h>
void main()
{
	int n,sum=0,temp,rem;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;
	}
	printf("%d",sum);
}
