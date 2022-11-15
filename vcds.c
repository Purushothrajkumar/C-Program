#include<stdio.h>
#include<string.h>
void main()
{
	char s[20];
	int consonent=0,vowel=0,space=0,digits=0,j;
	printf("enter the string:");
	fgets(s,20,stdin);
	for(j=0;s[j]!='\0';j++)
	{
		if(s[j]=='a' || s[j]=='e' || s[j]=='o' || s[j]=='u'|| s[j]=='i') 
		vowel++;
		if(!(s[j]=='a' && s[j]=='i' && s[j]=='e' && s[j]=='o' && s[j]=='u'))
		consonent++;
		if(s[j]>'0' && s[j]<'9')
		digits++;
		if(s[j]==' ')
		space++;
	}
	printf("%d%d%d%d",vowel,consonent,digits,space);
}
