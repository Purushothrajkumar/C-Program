#include<stdio.h>
void main()
{
	int k,n,i,j,temp;
	printf("enter the numbers:");
	scanf("%d",&n);
	int a[n];
	printf("enter the number of roatation:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<k;i++)
	{
	temp=a[n-1];
	for(i=n-i;i>=0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=temp;
for(i=0;i<n;i++)
printf("%d",a[i]);
}
}
