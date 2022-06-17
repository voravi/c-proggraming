#include<stdio.h>
#include<math.h>
main()
{
	int n;
	
	printf("Enter value of A =");
	fflush(stdin);
	scanf("%d",&n);
	
	
	printf("Area of Equilateral Triangle = %.2f",(sqrt(3) / 4) * (n * n));
	
}
