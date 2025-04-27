#include<stdio.h>
int main()
{
	int n,i,fac=1;
	do
	{
		printf("enter a number\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			fac=fac*i;
		}
		printf("%d",fac);
	break;
	}
	while(n>0);
	return 0;
}
