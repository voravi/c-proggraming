#include<stdio.h>
main()
{
	int i=1,n;
	
	printf("Enter year :");
	scanf("%d",&n);
	
	for(n;n>=i;i++)
	{
		if((n%4==0 && n%100!=0)||(n%400==0))
		{
			printf("This is a leap year ...!");
		}
		else 
		{
			printf("This is Not a leap year...");
		}
		
		break;
		
	}
}
