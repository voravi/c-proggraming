#include<stdio.h>

float rec(float l)
{
	return l * l;
}

main()
{
	int a,b;
	float c;
	
	printf("Enter Height :");
	scanf("%d",&a);
	


	
	printf("Area of square = %.2f",rec(a));
	
}

