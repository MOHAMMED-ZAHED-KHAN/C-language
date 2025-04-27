#include<stdio.h>
int main()
{
	int i,n,factorial=1;  //................................... IMPORTANT LINE //
	printf("enter the number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)  //................................... IMPORTANT LINE //
	{
		factorial=factorial*i;  //................................... IMPORTANT LINE //
		
	}
    printf("%d\n",factorial);
    return 0;
}
