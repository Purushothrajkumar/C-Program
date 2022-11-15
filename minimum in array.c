#include<stdio.h>
void main()
{
	int n,i,min;
	printf("enter the value:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<a[0])
		min=a[i];
	}
	printf("%d",min);
}
