#include<stdio.h>
void main()
{
	int n,i,j,index;
	printf("enter the value:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=n-1;i>=0;i--)
	{
		if(a[i]%2!=0)
		{
			index=i;
			break;
		}
	}
		for(j=0;j<=i;j++)
		printf("%d ",a[j]);
}
