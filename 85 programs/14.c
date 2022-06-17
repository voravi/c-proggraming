#include<stdio.h>
main()
{
	int a,b,c=0;
	
	printf("Befour swepping :\n");
	printf("A = ");
	scanf("%d",&a);
	
	printf("B = ");
	scanf("%d",&b);
	
	printf("\nAfter swepping :\n");
	
	c = a;
	a = b;
	b = c;
	
	printf("A = %d\n",a);
	printf("B = %d\n",b);
	
}
