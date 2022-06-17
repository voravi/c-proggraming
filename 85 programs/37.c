#include<stdio.h>
main()
{
	int n,i,rev,num=0,r=0;
	
	printf("Enter any number :");
	scanf("%d",&n);
	
	num = n;
	
	while(n != 0)
	{
		i = n % 10;
		rev = (rev*10) + i;
		n = n / 10;
	}
	
	printf("In reverce order = %d\n\n",rev);
	
	r = num + rev;
	
	printf("sum of num. n rev.num. is = %d",r);
}
