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
	
	for(i=0;i<n;i++)		// input = 3   i =0
	{
		for(j=i+1;j<n;j++)		//j= 1   // 1 < 3   //  
		{
			if(a[i] > a[j])		// 3 > 0	// 3 > 3
			{
				temp = a[i];		// temp = 3
				a[i] = a[j];		// a[i] = 0
 				a[j] = temp;		// a[j] = 3		
			}
		
	}
	
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("increaseing order : %d\n",a[i]);
	}
	
}
