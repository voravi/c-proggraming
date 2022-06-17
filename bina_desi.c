#include<stdio.h>
main()
{
	int n,i=0;
	int base=1,desimal=0;
	
	printf("Enter binary :");
	scanf("%d",&n);
	
	while(n != 0)
	{
		i = n % 10;
		desimal = desimal + i * base;
		n = n / 10;
		base = base * 2;
	}
	
	printf("Desimal = %d",desimal);
}

