/*WAP to find if a given string has a @ symbol or not.*/

#include<stdio.h>
main()
{
	int i,a=0,b=0;
	char str[100];
	
	puts("Enter any string :");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='@')
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
		printf("\n\nString has a @ symbol..");
	}
	else
	{
		printf("\n\nString hasnot a @ symbol..");
	}
}

