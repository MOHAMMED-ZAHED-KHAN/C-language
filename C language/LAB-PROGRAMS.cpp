
            		to print numbers from 1 to 10 using functioN
/*   

#include<stdio.h>
void print1to10(int);
void print1to10(int num)
{
	printf("%d\n",num);
	if(num<10)
	print1to10(num+1);
}
int main()
{
	int num;
	printf("enter num value:");
	scanf("%d",&num);
	print1to10(num);
	return 0;
}
*/

            to print factorial using function
/*
#include<stdio.h>
int factorial(int);
int factorial(int num)
{
	if(num==0)
	return 1;
	else
	return (num*factorial(num-1));
}
int main()
{
	int fact,num;
	printf("enter the num value:");
	scanf("%d",&num);
	fact=factorial(num);
	printf("factorial of %d is:%d\n",num,fact);
	return 0;
}
*/

            			  towers of hanoi
/*
#include <stdio.h>
void hanoi(int n, char rod_A, char rod_B, char rod_C)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod_%c to rod_%c",rod_A ,rod_B );
		return;
	}
	hanoi(n-1, rod_A,rod_C, rod_B);
	printf("\n Move disk %d from rod_%c to rod_%c", n, rod_A, rod_B);
	hanoi(n-1, rod_C, rod_B,rod_A);
}

int main()
{
	int no_of_disks ;
	printf("Enter number of disks: ");
	scanf("%d", &no_of_disks);
	hanoi(no_of_disks, 'A','C','B'); 
	return 0;
}
*/

                	   read and print 1-D array
/*
#include<stdio.h>
int main()
{
	int a[5],i,n;
	printf("enter the n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("1-D array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
*/

            to printf even numbers in an array

/*
#include<stdio.h>
int main()
{
	int a[5],i,n;
	printf("enter the n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("1-D array elements are:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\n",a[i]);
		}
	}
	return 0;
}
*/

                 to find sum of array elements

/*
#include<stdio.h>
int main()
{
	int a[5],i,n,sum=0;
	printf("enter the n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("sum of array elements are:%d\n",sum);
	return 0;
}
*/

               read and print 2-D array elements

/*
#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],c[50][50],i,j,m,n;
	printf("enter number of rows:");
	scanf("%d",&m);
	printf("enter number of columns:");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix 1 is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("matrix 2 is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf ("matrix addition = matrix 1 + matrix 2 is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/

                             matrix multiplication

/*
#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],c[50][50],i,j,k,p,q,m,n,sum=0;
	printf("enter no.of rows:");
	scanf("%d",&n);
	printf("enter no.of columns:");
	scanf("%d",&m);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter no.of rows:");
	scanf("%d",&p);
	printf("enter no.of columns:");
	scanf("%d",&q);
	printf("enter array elements:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("matrix addition is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			sum=0;
			for(k=0;k<m;k++)
			{
				sum=sum+(a[i][k]*b[k][j]);
			}
			c[i][j]=sum;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",c[i][j]);
		}
	printf("\n");
	}
	return 0;
}
*/
         finding length of a string using strlen() funnction

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,length;
	printf("enter the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	length=strlen(str);
	printf("length of string is:%d\n",length);
	return 0;
}
*/

            				palindrome string

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,j,length,flag=0;
	printf("enter the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	length=strlen(str);
	for(i=0,j=length-1;str[i]!='\0';i++,j--)
	{
		if(str[i]!=str[j])
		{
			flag=1;
			break;
		}
	}
	if (flag==1)
	{
		printf("not palindrome\n");
	}
	else
	{
		printf("palindrome\n");
	}
	return 0;
}
*/

            				compare 2 strings

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("enter the string1:");
	fgets(str1,100,stdin);
	str1[strcspn(str1,"\n")]='\0';
	printf("enter the string2:");
	fgets(str2,100,stdin);
	str2[strcspn(str2,"\n")]='\0';
	if(strcmp(str1,str2)==0)
	{
		printf("equal\n");
	}
	else
	{
		printf("not equal\n");
	}
	return 0;
}
*/

                         to concatinate 2 strings

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("enter the string1:");
	fgets(str1,100,stdin);
	str1[strcspn(str1,"\n")]='\0';
	printf("enter the string2:");
	fgets(str2,100,stdin);
	str2[strcspn(str2,"\n")]='\0';
	strcat(str1,str2);
	printf("string1:%s\n",str1);
	return 0;
}
*/

        		    to copy one string into another string 

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("enter the string1:");
	fgets(str1,100,stdin);
	str1[strcspn(str1,"\n")]='\0';
	strcpy(str2,str1);
	printf("string1:%s\n",str1);
	printf("string2:%s\n",str2);
	return 0;
}
*/

                	find total no.of vowels and consonants

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,vowels=0,consonants=0;
	printf("enter the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' || str[i]=='o' || str[i]=='i' || str[i]=='e' || str[i]=='u')
		vowels++;
		else
		consonants++;
	}
	printf("vowels=%d\n",vowels);
	printf("consonants=%d\n",consonants);
	return 0;
}
*/

                    to find total alphabets digits specc

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,alphabets=0,digits=0,specch=0;
	printf("enter the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
		alphabets++;
		else if(str[i]>=48 && str[i]<=57)
		digits++;
		else
		specch++;
	}
	printf("alphabets=%d\n",alphabets);
	printf("digits=%d\n",digits);
	printf("specch=%d\n",specch);
	return 0;
}
*/

                        direct initialisation of structure
                        
/*
#include<stdio.h>
struct student 
{
	char name[20];
	int rollno;
	float marks;
};	
int main()
{
	struct student stu={"zahed",66,99.9};
	printf("name=%s\n",stu.name);
	printf("rollno=%d\n",stu.rollno);
	printf("marks=%.2f\n",stu.marks);
	return 0;
}
*/

           			indirect initialisation of structure

/*
#include<stdio.h>
struct student 
{
	char name[20];
	int rollno;
	float marks;
};
int main()
{
	struct student stu;
	printf("enter name rollno marks of student:\n");
	scanf("%s%d%f",stu.name,&stu.rollno,&stu.marks);
	printf("name=%s\n",stu.name);
	printf("rollno=%d\n",stu.rollno);
	printf("marks=%.2f\n",stu.marks);
	return 0;
}
*/

                       		nested structure

/*
#include<stdio.h>
struct date
{
	int dd;
	int mm;
	int yy;
};
struct student 
{
	char name[20];
	int rollno;
	float marks;
	struct date dob;
};
int main()
{
	struct student stu={"zahed",66,99.9,{28,05,2006}};
	printf("name=%s\n",stu.name);
	printf("rollno=%d\n",stu.rollno);
	printf("marks=%.2f\n",stu.marks);
	printf("date of birth=%d-%d-%d\n",stu.dob.dd,stu.dob.mm,stu.dob.yy);
	return 0;
}
*/

                   				arrays of structure

/*
#include<stdio.h>
struct student 
{
	char name[20];
	int rollno;
	float marks;
};
int main()
{
	struct student stu[2];
	int i;
	for(i=0;i<2;i++)
	{
		printf("enter student %d details:\n",i+1);
		scanf("%s%d%f",stu[i].name,&stu[i].rollno,&stu[i].marks);
	}
	for(i=0;i<2;i++)
	{
	printf("student %d details are:\n",i+1);
	printf("name=%s\n",stu[i].name);
	printf("rollno=%d\n",stu[i].rollno);
	printf("marks=%.2f\n",stu[i].marks);
	}
	return 0;
}
*/

                         	 arrays in structure

/*
#include<stdio.h>
char *subjects[5]={"PCT","AC","LADE","SDC","ENG"};
struct student
{
	char name[20];
	int rollno;
	float marks[5];
};
int main()
{
	struct student stu[2];
	int i,j;
	for(i=0;i<2;i++)
	{
		printf("enter student %d detail:\n",i+1);
		scanf("%s%d",stu[i].name,&stu[i].rollno);
		for(j=0;j<5;j++)
		{
			printf("enter student %d %s marks:\n",i+1,subjects[j]);
			scanf("%f",&stu[i].marks[j]);
		}
	}
	for(i=0;i<2;i++)
	{
		printf("student %d detail:\n",i+1);
    	printf("name=%s\n",stu[i].name);
		printf("rollno=%d\n",stu[i].rollno);
		for(j=0;j<5;j++)
		{
			printf("student %d %s marks is %f:\n",i+1,subjects[j],stu[i].marks[j]);		
		}
	}
	return 0;
}
*/

                         pointers to structure

/*
#include<stdio.h>
struct student 
{
	char name[20];
	int rollno;
	float marks;
};
int main()
{
	struct student stu={"zahed",66,99.9};
	struct student *ptr=&stu;
	printf("name=%s\n",ptr->name);
	printf("rollno=%d\n",ptr->rollno);
	printf("marks=%.2f\n",ptr->marks);
	return 0;
}
*/



