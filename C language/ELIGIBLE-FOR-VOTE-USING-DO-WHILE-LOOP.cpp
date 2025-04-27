#include<stdio.h>
int main()
{
	int age;
	do
	{
		printf("enter ur age\n");
		scanf("%d",&age);
		if(age>=18)
		{
			printf("can vote\n");
		}
		else
		{
			printf("can not vote\n");
		}
	break;
	}
	while(age>0);
	return 0;
}
