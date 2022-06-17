#include<stdio.h>
main()
{
	int i,base = 1,desimal=0,binary,n;
	
	printf("Enter binary code :");
	scanf("%d",&n);
	
	binary = n;
	
	while(n > 0)
	{
		i = n % 10;
		desimal = desimal + i * base;
		n = n / 10;
		base = base * 2;
	}
	
	printf("binary is = %d\n",binary);
	printf("desimal is = %d",desimal);
	
}

