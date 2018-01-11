#include<stdio.h>
void main()
{
	int n,count=0,c;
	printf("enter n");
	scanf("%d",&n);
	while(n>0)
	{
		c=n%10;
		count=count+1;
		n=n/10;
	}
	printf("%d",count);
	
}
