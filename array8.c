#include<stdio.h>
main()
{
	int a[5][5] = { {2,4,6,8,9},
					{1,1,3,2,4},
					{7,6,4,8,5},
					{9,5,7,9,0},
					{5,3,6,3,1}
					};
	
	
	int i,j,k,l;
	
	
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if((i==1 && j==1) || (i==1 && j==2) || (i==1 && j==3) || 
			   (i==2 && j==1) || (i==2 && j==2) || (i==2 && j==3) || 
			   (i==3 && j==1) || (i==3 && j==2) ||  (i==3 && j==3))
			{
			
			printf("%d ",a[i][j]);
			
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
/*	printf("Enter Array size:\n");
	
	printf("Row :");
	scanf("%d",&k);
	
	printf("\nColum :");
	scanf("%d",&l);
	
	printf("\nEnter Elements:\n");
	
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			printf("a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);
		}
	}		*/
	
//	printf("\nArray Elements are:\n");
	

		
			
			
			
	
		
		
	
	





	
}
