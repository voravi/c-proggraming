/* Write a C program to check a number is even or odd 
	 using ternary operator.
*/

#include<stdio.h>
main()
{
	
	int n;
	
	printf("Enter any number :");
	scanf("%d",&n);
	
	(n%2==0)? printf("%d is even",n)
      		: printf("%d is odd",n);
}
