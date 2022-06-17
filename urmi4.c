#include<stdio.h>
main()
{
	int i,n,pos,num;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\n\nEnter array elemnts :\n\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\nEnter pos for replace :");
	scanf("%d",&pos);
	
	printf("\n\nEnter new element :");
	scanf("%d",&num);
	
	
	for(i=0;i<n;i++)
	{
		if(pos-1 == i)
		{
			a[i] = num;
		}
	}
	

	printf("\n\nNew array :\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	
}

