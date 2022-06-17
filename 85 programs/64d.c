#include<stdio.h>

add(int a,int b)
{
	return a + b;
}
main()
{
	int p,q,r;
	
	printf("Enter first value :");
	scanf("%d",&p);
	
	printf("Enter second value :");
	scanf("%d",&q);
	
	r = add(p,q);
	
	printf("%d",r);
}

