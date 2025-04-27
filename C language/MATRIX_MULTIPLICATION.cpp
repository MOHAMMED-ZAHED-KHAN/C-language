#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],c[50][50],i,j,k,p,q,m,n,sum=0;
	printf("enter no.of rows:");
	scanf("%d",&n);
	printf("enter no.of columns:");
	scanf("%d",&m);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter no.of rows:");
	scanf("%d",&p);
	printf("enter no.of columns:");
	scanf("%d",&q);
	printf("enter array elements:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("matrix addition is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			sum=0;
			for(k=0;k<m;k++)
			{
				sum=sum+(a[i][k]*b[k][j]);
			}
			c[i][j]=sum;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",c[i][j]);
		}
	printf("\n");
	}
	return 0;
}
