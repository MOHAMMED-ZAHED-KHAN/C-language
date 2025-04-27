/* 

#include<stdio.h>
int main()
{
	int a=10;
	int* ptr=&a;
	printf("%d\n",a);
	printf("%d\n",*ptr);
	printf("%d\n",**(&ptr));
	printf("%d\n",&a);
	printf("%d\n",ptr);
	printf("%d\n",*(&ptr));
	return 0;
}

*/

#include<stdio.h>
int main()
{
	int marks[5]={50,50,50,50,50},i;
	int* ptr=marks;
	printf("array elements are:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	return 0;
}

