#include<stdio.h>
void main()
{
	int i,rem,sum=0,temp,n;
	printf("enter the number:");
	scanf("%d",&n);
	i=0;
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+(rem*pow(2,i));
		temp=temp/10;
		i++;
}
      printf("%d",sum);	

}
