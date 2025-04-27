#include<stdio.h>
#define pi 3.14
float diameter(float);
float circumference(float);
float area(float);
float diameter(float radius)
{
	return (2*radius);
}
float circumference(float radius)
{
	return (2*pi*radius);
}
float area(float radius)
{
	return (pi*radius*radius);
}
int main ()
{
	float radius;
	printf("enter the radius value:");
	scanf("%f",&radius);
	printf("diameter of the circle is :%f\n",diameter(radius));
	printf("circumference of the circle is :%f\n",circumference(radius));
	printf("area of the circle is :%f\n",area(radius));
	return 0;
}	
