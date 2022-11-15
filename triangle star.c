#include<stdio.h>
void main()
{
	int num,i,j;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
