#include<stdio.h>

jo(int a,int b)
{
	if(a>b)
	{
		printf("%d is max",a);
	}
	else
	{
		printf("%d is max",b);
	}
}
main()
{
	int a,b;
	
	printf("enter first value :");
	scanf("%d",&a);
	
	printf("Enter second value :");
	scanf("%d",&b);
	
	jo(a,b);
}

