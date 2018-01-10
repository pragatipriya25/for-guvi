# include<stdio.h>
void main()
{
char a;
printf("enter the character");
scanf("%s",&a);
int val= a;
if(val>=65 && val<=90)
printf("Alphabet");
else if(val>=97 && val<=122)
printf("Alphabet");
else
printf("No");
}
