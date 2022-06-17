#include<stdio.h>
int func(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i] % 2 == 1)
		{
			printf("odd elements =%d\n",a[i]);
		}
	}
	return 0;
}


main()
{
	int n,i,j;
	
	printf("Enter Array size:\n");
	scanf("%d",&n);
	
	int a[100];
	
	printf("Enter array elements :\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	func(a,n);
//	printf("Value of array is = %d",arr);
}
