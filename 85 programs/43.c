#include <stdio.h>

main()
{
    int n,i,j;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[n];                    //Array Declaration
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    for(i=0;i<n;i++)         //Sorting Array
    {
        int temp;
        
        
        for(j=i+1; j<n ;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The second smallest element is %d",a[n-2]); 
	  
    printf("\n");
    
    printf("The second largest element is %d",a[1]);      
  
}
