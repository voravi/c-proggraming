/*Write a C program to input any character and check whether it is alphabet, digit or special
character. */

#include<stdio.h>
main()
{
	char n;
	
	printf("Enter ANY thing :");
	scanf("%c",&n);
	
	if((n >= 'a' && n <= 'z') || n >= 'A' && n <= 'z')
	{
		printf("You enter alphabet..");
	}
	else if(n >= '1' && n <= '9')
	{
		printf("You enter digit..");
	}
	else
	{
		printf("You enter special chareacter..");
	}
}
