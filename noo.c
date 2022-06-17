#include<stdio.h>
main()
{
	int n,i,pos=0,num=0;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter %d elements :\n",i);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\nEnter position for delete :");
	scanf("%d",&pos);
	
	if(pos >= num+1 && pos < 0)
	{
		printf("Delete not possible...!");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(pos == i)
			{
				continue;
			}
			printf("%d ",a[i]);
		}
		
	}
	
}

