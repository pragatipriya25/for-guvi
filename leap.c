#include<stdio.h>
void main()
{
	int n;
	printf("enter the year");
	scanf("%d",&n);
	if(n%400==0)
	{
		printf("Yes");
	}
	else if(n%100==0)
	{
		printf("No");
	}
	else if(n%4==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
