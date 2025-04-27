#include<stdio.h>
struct student 
{
	char name[50];
	int rollno;
	float marks;
};
void display(char[],int,float);
void display(char name[],int rollno,float marks)
{
	printf("name=%s\n",name);
	printf("rollno=%d\n",rollno);
	printf("marks=%f\n",marks);
}
int main()
{
	struct student stu={"zahed",66,99};
	display(stu.name,stu.rollno,stu.marks);
	return 0;
}
