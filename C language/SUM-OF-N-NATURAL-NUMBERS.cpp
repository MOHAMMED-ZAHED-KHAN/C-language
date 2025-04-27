 #include<stdio.h>
int main()
{
	int i,n,sum;
	printf("enter value of n:\n");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		printf("%d\n",sum);
	}
	return 0;
}
