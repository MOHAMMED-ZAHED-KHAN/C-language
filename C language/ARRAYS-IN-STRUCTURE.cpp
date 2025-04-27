#include<stdio.h>
char *subjects[5]={"PCT","AC","SDC","LADE","ENG"};
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
		printf("enter student %d details:\n",i+1);
		scanf("%s%d",stu[i].name,&stu[i].rollno);
		for(j=0;j<5;j++)
		{
			printf("enter student %d %s marks:\n",i+1,subjects[j]);
			scanf("%f",&stu[i].marks[j]);
		}
	}
	for(i=0;i<2;i++)
	{
		printf("student %d details:\n",i+1);
		printf("name=%s\n",stu[i].name);
		printf("rollno=%d\n",stu[i].rollno);
		for(j=0;j<5;j++)
		{
			printf("student %d %s marks is %f:\n",i+1,subjects[j],stu[i].marks[j]);
		}
	}
	return 0;
}
