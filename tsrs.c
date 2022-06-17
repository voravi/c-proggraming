#include<stdio.h>

int maximum(int n1,int n2)
{
	int max;
	
	if(n1 > n2)
		max = n1;
	else
		max = n2;
}

void main()
{
	int n1,n2,max;
	
	printf("Enter two values :");
	scanf("%d %d",&n1, &n2);
	
	max = maximum(n1,n2);
	
	printf("\nmax value is = %d",max);
}

