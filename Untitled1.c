#include<stdio.h>
int fact(int);
void main()
{
	int n,i;
	printf("enter the number");
	scanf("%d",&n);
	i=fact(n);
	printf("%d",i);
}
int fact( int n)
{
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
}

