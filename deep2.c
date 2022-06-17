#include<stdio.h>
main()
{
	int j,m,n,i,o;
	
	printf("How numbers you want to input :");
	scanf("%d",&j);
	
	int a[i];
	
	printf("\nEnter NUmbers :\n");
	
	for(i=0;i<j;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<j;i++)
	{
		if(a[i] > m)
		{
			m = a[i];
		}
	}
	

	for(i=0;i<j;i++)
	{
		if(a[i] < n)
		{
			n = a[i];
		}
	}
	
	
	for(i=0;i<j;i++)
	{
		if(n<a[i]<m)
		{
			o = a[i];
		}
	}
	
	printf("\n%d\n",m);
	
	printf("\n%d",o);
	
	printf("\n%d",n);

	
}
