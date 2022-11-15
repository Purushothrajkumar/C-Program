#include<stdio.h>
#include<string.h>
void main()
{
	char a[20],ch;
	int count=0,i;
	printf("enter the string:");
	fgets(a,20,stdin);
	printf("enter the character:");
	scanf("%c",&ch);
	for(i=0;a[i]!='\0';i++)
	{
		if(ch==a[i])
		count++;
	}
	printf("%d",count);
}
