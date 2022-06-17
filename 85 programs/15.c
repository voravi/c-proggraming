#include<stdio.h>
main()
{
	int a,b;
	
	printf("Befour swepping :\n");
	printf("A = ");
	scanf("%d",&a);
	
	printf("B = ");
	scanf("%d",&b);
	
	printf("\nAfter swepping :\n");
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("A = %d\n",a);
	printf("B = %d\n",b);
	
}
