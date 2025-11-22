#include<stdio.h>
int main()
{
	int i,j,r,c,a[2][2],t[2][2];
	printf("Enter rows and colums");
	scanf("%d%d",&r,&c);
	printf("Enter the elements");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[i][j]=a[j][i];
		}
	}
	printf("Transpose of matrix is:");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
 	}
	return 0;
}	
