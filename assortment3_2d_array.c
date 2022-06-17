#include<stdio.h>
main()
{
	int i,j,l,k,r,c,n,f[100];
	int count;
	
//	2d array dec / incialization
	
	printf("Enter array size :\n\n");
	printf("rows :");
	scanf("%d",&r);
	
	printf("Cols :");
	scanf("%d",&c);
	
	int b[r][c];
	
	printf("\n\nEnter array elements :\n\n");
	for(k=0;k<r;k++)
	{
		for(l=0;l<c;l++)
		{
			printf("a[%d][%d] = ",k,l);
			scanf("%d",&b[k][l]);
		}
	}
	
//	converting 2d array into 1d
	
//	printf("\n\nConvert 2d inti 1d array...\n\n");
	
	n = r * c;
	int a[n];
	i=0;
	
	for(k=0;k<r;k++)
	{
		for(l=0;l<c;l++)
		{
			a[i] = b[k][l];
			i++;
		}
	}
	
	for(i=0;i<n;i++)
	{
//		printf("a[%d] = %d\n",i,a[i]);	
		f[i] = -1;
	}



	// start find fequancy...
	
	for(i=0;i<n;i++)
	{
		count=1;
		
		for(j=i+1;j<n;j++)
		{
			if(a[i] == a[j])
			{
				count++;
				
				f[j] = 0;
			}
		}
		if(f[i] != 0)
		{
			f[i] = count;
		}
	}
	
	printf("\n\nFequency of all elements :\n\n");
	
//	printf fequency
	
	for(i=0;i<n;i++)
	{
		if(f[i] != 0)
		{
			printf("%d occurs %d times\n",a[i],f[i]);
		}
	}
	
}
