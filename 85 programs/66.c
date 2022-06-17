#include<stdio.h>

float tri(float l,float h)
{
	return (l * h) / 2;
}

main()
{
	int a,b;
	float c;
	
	printf("Enter Height :");
	scanf("%d",&a);
	
	printf("Enter wigth :");
	scanf("%d",&b);
	
	c = tri(a,b);
	
	printf("Area of scalene tringle = %.2f",tri(a,b));
	
}

