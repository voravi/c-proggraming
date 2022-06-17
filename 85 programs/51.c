#include <stdio.h>
 
int main()
{
	int arr[100], i, j, k, Size;
	
	printf("Enter array size :");
	scanf("%d", &Size);
	
	printf("\n Please Enter %d elements of an Array \n", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}     
 
	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			for(k = j; k < Size; k++)
    			{
    				arr[k] = arr[k + 1];
				}
				Size--;
				j--;
			}
		}
	}

 	printf("\n Final Array after Deleteing Duplicate Array Elements is:\n");
 	for (i = 0; i < Size; i++)
  	{
 		printf("%d ", arr[i]);
  	}	     
 	return 0;
}
