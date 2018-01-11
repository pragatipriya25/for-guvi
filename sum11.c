# include<stdio.h>
void main()
{
	int a[10],n,k,sum=0,i;
	printf("enter n");
	scanf("%d",&n);
	printf("enter k");
	scanf("%d",&k);
	printf("enter values");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
	for(i=0;i<k;i++){
	sum=sum+a[i];
}
	printf ("%d",sum);
	
}
