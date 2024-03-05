#include<stdio.h>

main()
{
	int a,p,r,t;
	
	printf("enter p intrest =");
	scanf("%d",&p);
	
	printf("enter r intrest =");
	scanf("%d",&r);
	
	printf("enter t intrest =");
	scanf("%d",&t);
	
	a = p*r*t/100;
	printf("%d",&a);
}