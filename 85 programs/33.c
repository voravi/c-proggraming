#include<stdio.h>
main()
{
	int n,i,sum=0,temp=0;
	
	printf("Ente any number :");
	scanf("%d",&n);
	
	temp = n;
	
	while(n != 0)
	{
		i = n % 10;
		sum = sum + (i*i*i);
		n = n / 10;
	}
	
	if(sum == temp)
	{
		printf("%d is armstrong number",temp);
	}
	else
	{
		printf("%d is not armstrong number",temp);
	}
	
}
