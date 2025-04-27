#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],c[50][50],i,j,m,n;
	printf("enter no.of rows for matrix:");
	scanf("%d",&n);
	printf("enter no.of columns for matrix:");
	scanf("%d",&m);
	printf("enter matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}	
	printf("1st matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
	printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}	
	printf("2nd matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",b[i][j]);
		}
	printf("\n");
	}	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}	
	printf("matrix addition is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",c[i][j]);
		}
	printf("\n");
	}	
	return 0;
}
