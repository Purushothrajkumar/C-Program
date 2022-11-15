#include<stdio.h>
void main()
{
	int num;
	printf("enter the value of a:");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
		printf("one");
		break;
		case 2:
		printf("two");
		break;
		case 3:
		printf("three");
		break;
		default:
		printf("invalid number");
		break;
	}
}
