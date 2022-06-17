#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter Two numbers :");
	scanf("%d %d",&a, &b);
	
	printf("\n\n");
	
	if(a > b)
	{
		printf("%d is max",a);
	}
	else
	{
		printf("%d is max",b);
	}
}

