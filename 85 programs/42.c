#include<stdio.h>
main()
{
	int a[100],n,i,big=0;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	big = a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i] > big)
		{
			big = a[i];
		}
	}
	
	printf("Biggest elements is = %d",big);
	

}

