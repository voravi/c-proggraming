#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	float a,b,c,x,x1,x2,d;
	
	printf("For ax^2 + bx + c : \n\n");
	
	printf("Enter A : ");
	scanf("%f",&a);
	printf("Enter B : ");
	scanf("%f",&b);
	printf("Enter C : ");
	scanf("%f",&c);
	
	d = (b*b) - 4*a*c;
	
	if(d == 0)
	{
		x = -b + (2*a);
		
		printf("\n\nThe roots are Equal X = %.2f",x);
	} 
	else if(d > 0)
	{
		x1 = (-b + sqrt(d)) / (2*a);
		x2 = (-b - sqrt(d)) / (2*a);
		
		printf("\n\nThe roots are x = %.2f and x = %.2f\n\n",x1,x2);
	}
	else
	{
		printf("\n\n Roots are Imagine...!");
	}
	
	return 0;
}

// try : 2x^2 + 6x + 4...  ans: x = -1 or x = -2...
