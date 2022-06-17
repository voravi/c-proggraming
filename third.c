#include<stdio.h>
int main()
{
	int n,i,t,sum=0;
	
	printf("Enter any number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
		    t = i;
		}
		else
		{
			sum += i;
		}
	}

    printf("%d ",sum);

	return 0;
}

