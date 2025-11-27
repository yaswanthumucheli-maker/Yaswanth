#include<stdio.h>
void display(int m,int n,int a[3][3])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int m=3,n=3;
	display(m,n,a);
	return 0;
}
