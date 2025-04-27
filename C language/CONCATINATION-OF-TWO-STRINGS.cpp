#include<stdio.h>
#include<string.h>	
int main()
{
	while(1)
	{
	char str1[20],str2[20];
	printf("enter the string 1:\n");
	fgets(str1,20,stdin);
	str1[strcspn(str1,"\n")]='\0';
	printf("enter the string 2:\n");
	fgets(str2,20,stdin);
	str2[strcspn(str2,"\n")]='\0';
	strcat(str1, str2);
	printf("concatination of two strings is:%s\n",str1);
	return 0;
	}
}
