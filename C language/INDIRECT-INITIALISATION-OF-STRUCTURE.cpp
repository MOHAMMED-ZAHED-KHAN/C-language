#include<stdio.h>
struct student
{
	char name[50];
	int rollno;
	float marks;
};
int main()
{
	struct student stu;
	printf("enter student details:\n");
	scanf("%s%d%f",stu.name,&stu.rollno,&stu.marks);
	printf("student details are:\n");
	printf("name=%s\n",stu.name);
	printf("rollno=%d\n",stu.rollno);
	printf("marks=%f\n",stu.marks);
	return 0;
}
