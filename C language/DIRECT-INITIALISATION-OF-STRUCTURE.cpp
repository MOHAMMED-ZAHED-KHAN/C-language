#include<stdio.h>
struct student 
{
	char name[20];
	int rollno;
	float marks;
};
int main()
{
	struct student stu={"zahed",66,99.5};
	printf("student details are :\n");
	printf("name=%s\n",stu.name);
	printf("roll=%d\n",stu.rollno);
	printf("marks=%f\n",stu.marks);
	return 0;
}
