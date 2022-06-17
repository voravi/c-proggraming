#include<stdio.h>

int addition()
{
	int n1,n2;
	
	printf("Enter two numbers : ");
	scanf("%d %d",&n1, &n2);
	
	printf("\n");
	
	return n1 + n2;
}

void main()
{
	printf("Addition is = %d ",addition());
}

