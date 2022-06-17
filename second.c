#include<stdio.h>

int main()
{
	int n,sum=0,r;
	
	scanf("%d",&n); // 125
	
	while(n>0) //125>0 
	{
		r=n%10;  // 125%10   1%10 
		sum=sum+r;  // 0+5 = 5
		n=n/10; // 12/10 = 1
	}
	printf("%d",sum);
	return 0;
}
