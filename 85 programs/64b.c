#include<stdio.h>
cub(int n)
{ 
	return n * n * n;
}

main()
{
	int a;
	
	printf("Enter value =");
	scanf("%d",&a);
	
	printf("%d",cub(a));
}


