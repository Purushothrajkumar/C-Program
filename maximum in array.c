#include<stdio.h>
void main()
{
	int n,i,max;
	printf("enter the value:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>a[0])
		max=a[i];
	}
	printf("%d",max);
}
