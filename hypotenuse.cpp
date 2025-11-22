#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    int y;
    printf("Enter two numbers");
    scanf("%d%d",x,y);
    double hypotenuse = sqrt((x*x)+(y*y));
    printf("The hypotenuse of the given triangle is .2lf\n");
    return 0;
}
