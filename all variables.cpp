#include<stdio.h>
int main()
{
	int a;
	float b;
	char ch;
    char str[100];
    printf("enter a number");
    scanf("%d",&a);
    printf("enter a float number");
    scanf("%f",&b);
    printf("enter a character\n");
    scanf("%c",&ch);
    printf("enter a string");
    scanf("%s",&str);
    printf("%d\n%f\n%c\n%s",a,b,ch,str);
    return 0;
}
