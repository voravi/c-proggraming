#include<stdio.h>

main()
{
	int num,fd,ld,sum;
	
	printf("Enter digit :");
	scanf("%d",&num);

// first search for last digit	
	
	ld = num % 10;
	
// now last digit 	
	
	while(num>10)
	{
		num /= 10;
	}
	fd = num;
	
//  sum of first and last digit 	
	
	sum = ld + fd;
	
	printf("sum first and last digit = %d",sum);
	
}
