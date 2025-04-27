#include<stdio.h>
struct student
{
	char name[50];
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
	printf("marks=%f\n",stu[i].marks);
	} 
	return 0;
}
