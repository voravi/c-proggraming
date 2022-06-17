#include<stdio.h>
main()
{
	int n1,n2;
	int max=0;
	
	printf("enter Two numbers :");
	scanf("%d %d",&n1,&n2);

	max = n1;
					
	while(1)
	{
		if(max % n1 == 0  && max % n2 == 0)
		{
			printf("The LCM is = %d",max);
			break;
		}
		max++;
	}
}

/*#include<stdio.h>
main()
{
	int n,i,n1,n2,tot;
	
	printf("Enter two number :");
	scanf("%d %d",&n1,&n2);
	
	for(i=1;i<=n1 && i<=n2;i++)
	{
		if(n1 % i == 0 && n2 % i == 0)
		{
			tot = i;
		}
	}
	
	printf("GCD is = %d",tot);
}*/
