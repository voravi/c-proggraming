#include<stdio.h>
main()
{
	int n,i;
	
	for(n=1;n<=250;n++)
	{
		if(n%5==0 && n%3==0)
		{
			printf("%d",n);
			
			printf("\n");
		}
//		else
//		{
//			printf(" ");
//		}
	}
}
