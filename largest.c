# include<stdio.h>
void main()
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b && a>c)
printf(a);
else if(b>a && b>c)
printf(b);
else
printf(c);
}

