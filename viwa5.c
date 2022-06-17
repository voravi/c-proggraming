#include<stdio.h>
main()
{
	int a,b,c,d,e;
	
	printf("Enter five numbers : ");
	scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
	
	printf("\n\n");
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					printf("%d is max",a);
				}
				else
				{
					printf("%d is max",e);
				}
			}
			else
			{
				if(d>e)
				{
					printf("%d is max",d);	
				}
				else
				{
					printf("%d is max",e);
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("%d is max",c);
				}
				else
				{
					printf("%d is max",e);
				}
			}
			else
			{
				if(d>e)
				{
					printf("%d is max",d);
				}
				else
				{
					printf("%d is max",e);
				}
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					printf("%d is max",b);
				}
				else
				{
					printf("%d is max",e);
				}
			}
			else
			{
				if(d>e)
				{
					printf("%d is max",d);
				}
				else
				{
					printf("%d is max",e);
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("%d is max",c);
				}
				else
				{
					printf("%d is max",e);
				}
			}
			else
			{
				if(d>e)
				{
					printf("%d is max",d);
				}
				else
				{
					printf("%d is max",e);
				}
			}
		}
	}
}

