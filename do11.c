#include<stdio.h>
main()
{
	int n,i,sum=0;
	
	printf("Enter digits :");
	scanf("%d",&n); 
	
//	i = 1;

	do
	{
		
		n = n/10;
		
		sum++; 
		
	}
	while(n>0);
	
	printf("%d\n",sum);
	
}
