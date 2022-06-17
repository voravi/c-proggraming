#include<stdio.h>
main()
{
	int i,found,search,n,a[100];
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	printf("Enter array element :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter elements for search :");
	scanf("%d",&search);
	
	found = 0;
	
	for(i=0;i<n;i++)
	{
		if(a[i] == search)
		{
			found = 1;
			break;
		}
	}
	
	if(found == 1)
	{
		printf("%d is founded on %d position",search,i + 1);
	}
	else
	{
		printf("%d is not in your array elements..!",search);
	}
}

