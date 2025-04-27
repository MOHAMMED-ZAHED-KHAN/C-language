#include<stdio.h>
struct date
{
	int dd;
	int mm;
	int year;
};
struct student
{
	char name[50];
	int rollno;
	float marks;
	struct date dob;
};
int main()
{
	struct student stu={"zahed",66,99.5,{28,05,2006}};
	printf("name=%s\n",stu.name);
	printf("rollno=%d\n",stu.rollno);
	printf("marks=%f\n",stu.marks);
	printf("date of birth=%d-%d-%d\n",stu.dob.dd,stu.dob.mm,stu.dob.year);
	return 0;
}
