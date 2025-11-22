#include<stdio.h>
int main()
{
	int i,t,rev=0,r;
	printf("enter a number\n");
	scanf("%d",&i);
	t=i;
	while(i!=0)
	{
		r=i%10;
		rev=rev*10+r;
		i=i/10;
	}
	if(t=rev)
	printf("Palindrome");
	else
	printf("Not Palindrome");
	return 0;
}
