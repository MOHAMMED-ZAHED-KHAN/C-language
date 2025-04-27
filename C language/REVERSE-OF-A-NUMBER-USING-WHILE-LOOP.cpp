#include<stdio.h>
int main ()
{
	int n,i,reverse=0;
	printf("enter the number \n");
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		reverse=reverse*10+i;
		n=n/10;
	}
	printf("%d\n",reverse);
	return 0;
}
