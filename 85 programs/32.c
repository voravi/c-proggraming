#include<stdio.h>
main()
{
	int m=0,n,f=0,i;
	printf("Enter any number :");
	scanf("%d",&n);
	
	m = n / 2;
	
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			

			printf("Number is not a prime");
		
			f = 1;
		
			break;
		}
	}
	
	if(f == 0)
	{
		printf("Number is prime");
	}
}

//  cheak a armstrong number thi baki chhe;
