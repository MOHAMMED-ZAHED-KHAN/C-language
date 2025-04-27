#include<stdio.h>
int max(int);
int min(int);
int max(int a , int b)
{
	return ((a>b)?a:b);
}
int min(int a , int b)
{
	return ((a<b)?a:b);
}
int main()
{
	int a,b;
	printf("enter the value of a and b:\n");
	scanf("%d%d",&a,&b);
	printf("maximum number is :%d\n",max(a,b));
	printf("minimum number is :%d\n",min(a,b));
	return 0;
}
