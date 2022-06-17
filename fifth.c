#include<stdio.h>
int main()
{
	int i,j=1;
	
	printf("Enter any number :\n");
	scanf("%d",&i);
	
	printf("\nmultification table :\n");
	
	while(i<=10)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d*%d=%d\n",i,j,i*j);
		}
		
	//	printf("\n==========\n");
		break;
		i++;
	}
	return 0;
}
