#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter the value of a:");
	scanf("%d",&a);
    printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter the value of c:");
	scanf("%d",&c);	
	printf("enter the value of d:");
	scanf("%d",&d);
	if(a>b && a>c && a>d)
	printf("A is greter");
	if(b>a && b>c && b>d)
	printf("B is greater");
	if(c>a && c>b && c>d)
	printf("C is greater");
	if(d>a && d>b && d>c)
	printf("D is greater");
}
