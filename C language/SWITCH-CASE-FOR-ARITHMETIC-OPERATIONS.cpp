//switch cases for ARITHMETIC OPERATIONS //
#include<stdio.h>
int main()
{
	int a , b;
	int choice;
	printf("1.addition\n2.subtraction\n3.multiplication\n4.quotient\n5.remainder\n");
	printf("enter ur choice:");
	scanf("%d",&choice);
	printf("enter two numbers a and b:\n");
	scanf("%d%d",&a,&b);
	switch(choice)
	{
		case 1:
			printf("addition of a and b = %d+%d=%d",a,b,a+b);
			break;
		case 2:
			printf("subtraction of a and b = %d-%d=%d",a,b,a-b);
			break;
		case 3:
		    printf("multiplication of a and b = %d*%d=%d",a,b,a*b);
		    break;	
		case 4:
			printf("quotient of a and b = %d/%d=%d",a,b,a/b);
			break;
		case 5:
			printf("remainder of a and b = %d%d=%d",a,b,a%b);
			break;
		default:
			printf("invalid choice \n");
			break;
	}
	return 0;
}
