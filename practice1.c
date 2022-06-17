#include<stdio.h>
main()
{
	int i,a=0,b=0;
	char str[100];
	
	puts("Enter any string :");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
		   str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			a++;
		}
		else
		{
			b++;
		}
	}
	
	if(a > 0)
	{
		printf("\n\nString have vowels...");
	}
	else
	{
		printf("\n\nNo vowels in string...");
	}
}
/*
WAP to finds if a given string contains any vowels or not.

WAP to detect if a given string contains any special symbols or not.

WAP to detect if a given stuttering contains any digit or not.

WAP to find if a given string is palindrome or not.

WAP to find if a given string has a @ symbol or not.
*/
