/*Write a C program to find maximum between three numbers.*/

#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter first value:\n");
	scanf("%d",&a);
	printf("enter second value :\n");
	scanf("%d",&b);
	printf("Enter third value :\n");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is max",a);
		}
		else
		{
			printf("%d is max",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d is max",b);
		}
		else
		{
			printf("%d is max",c);
		}
	}
}
