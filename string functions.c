#include<stdio.h>
#include<string.h>
void main()
{
	char a[20],b[20];
	printf("enter the string:");
	scanf("%s",a);
	scanf("%s",b);
	printf("length of a=%d length of b= %d",strlen(a),strlen(b));
	strcpy(b,a);
    printf("\n%s %s",a,b);
    strcat(a,b);
	printf("\n%s %s",a,b);
	printf("\nlower case is %s",strlwr(a));
	printf("\nupper case is %s",strupr(b));
	printf("string reverse is %s",strrev(b));
}
