#include<stdio.h>
#include<string.h>	
int main()
{
	char str[20],length;
	printf("enter the string:\n");
	fgets(str,20,stdin);
	str[strcspn(str,"\n")]='\0';
	length=strlen(str);
	printf("length of string is:%ld\n",length);
	return 0;
}
