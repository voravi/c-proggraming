#include<stdio.h>
main()
{
	int i,j,n;
	int temp=0;
	
	printf("Enter Array size :");
	scanf("%d",&n);
	
	printf("\nEnter Elements :\n");
	
	int a[100];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		
	}
	
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("increaseing order : %d\n",a[i]);
	}
	
}
