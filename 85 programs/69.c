#include<stdio.h>
# define PI 3.14

float circle(float r)
{
	return r * PI * r;
}
int main()
{
	int r;
	
	printf("Enter radius of circle :");
	scanf("%d",&r);
	
	printf("Area of circle is = %.2f",circle(r));
}

