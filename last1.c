#include<stdio.h>

int cub(int n)
{
	return n*n*n;
}

main()
{
	int n;
	
	printf("Enter any number :");
	scanf("%d",&n);
	
	
	printf("Cub is = %d",cub(n));	
}
