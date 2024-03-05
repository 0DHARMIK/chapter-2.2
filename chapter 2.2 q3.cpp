#include<stdio.h>

main()
{
	float base;
	float hight;
	float area;
	
	printf("enter the base triangle =");
	scanf("%f",&base);
	
	printf("enter the hight triangle =");
	scanf("%f",&hight);
	
	area= base*hight;
	printf("area of triangle = %f,",area);
	
}