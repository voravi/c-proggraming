#include<stdio.h>

float tri(float l)
{
	return ((3/2) / 4) * (l * l);

}
main()
{
	int a;
	float c;
	
	printf("Enter Any number :");
	scanf("%d",&a);
	

	c = tri(a);
	
	printf("Area of scalene tringle = %.2f",tri(a));
	
}

