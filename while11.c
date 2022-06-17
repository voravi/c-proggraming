#include<stdio.h>
int main()
{
	long int count = 0,num; 
	
	printf("Enter digit =");
	scanf("%d",&num);
	
		
	while(num > 0) // 567 > 0   // 56 > 0   // 5 > 0
	{
		 count++;    // 1  // 2  // 3
		
		 num = num/10;   // 567/10 = 56  // 56/10 = 5   // 5/10 = 0
	}
	
	printf("%d",count);
//	printf("%d\n",p);
	
	return 0;
}
