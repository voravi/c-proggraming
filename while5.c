#include<stdio.h>
main()

{
	int i,n;
	
	printf("Enter value :");
	scanf("%d",&n);
	
	i = 1;
	
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
		i++;
	}
	
}
