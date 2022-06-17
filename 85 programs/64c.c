#include<stdio.h>

get(int a)
{
	printf("Enter value :");
	scanf("%d",&a);
	
	return a * a;
}
main()
{
	int n;
	
	printf("%d",get(n));
}

