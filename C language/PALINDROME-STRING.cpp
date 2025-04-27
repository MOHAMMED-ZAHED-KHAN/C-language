#include<stdio.h>
#include<string.h>	
int main()
{
	char str[20];
	int i,j,length,flag=0;
	printf("enter the string:\n");
	fgets(str,20,stdin);
	str[strcspn(str,"\n")]='\0';
	length=strlen(str);
	for (i=0,j=length-1;str[i]!='\0';i++,j--)
	{
		if(str[i]!=str[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("not palindrome\n");
	}
	else
	{
		printf("palindrome\n");
	}
	return 0;
}
