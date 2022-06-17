#include<stdio.h>
main()
{
	int n,p=0,rev=0,fir;
	
	printf("Enter any number :");
	scanf("%d",&n);
	
	fir = n;
	
	while(n != 0)
	{
		p = n % 10;
		rev = (rev*10) + p;
		n = n / 10;
	}
//	printf("In reverce = %d",rev);

	if(rev == fir)
	{
		printf("You entered pelindrome number");
	}
	else
	{
		printf("%d is not pelindrome..!",fir);
	}
	
	
}
