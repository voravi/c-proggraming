// C program to print multiplication table of a given number
#include<stdio.h>
main()
{
	int num,i =2;
	
	printf("Enter any number :");
	scanf("%d",&num);
	
	for(num;num>=10;num++)
	{
		num = i*num;
		printf("%d ",num);
				
	}
	
	
}
