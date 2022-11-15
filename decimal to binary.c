#include<stdio.h>
void main()
{
	int a[20],i,j,temp,n;
	printf("enter the number:");
	scanf("%d",&n);
	i=0;
	temp=n;
	while(temp!=0)
	{
		a[i]=temp%2;
		temp=temp/2;
		i++;
	}
	for(j=i-1;j>=0;j--)
      printf("%d",a[j]);	
	 
}
