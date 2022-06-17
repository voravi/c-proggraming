/*WAP to detect if a given stuttering contains any digit or not.*/

#include<stdio.h>
main()
{
	int i,a=0,b=0,c=0;
	char str[100];
	
	puts("Enter any string :");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			a++;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			c++;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			c++;
		}
		else if(str[i] ==' ')
		{
			c++;
		}
		else
		{
			b++;
		}
	}
	
	if(a > 0)
	{
		printf("\n\nString have number...");
	}
	else
	{
		printf("\n\nNo numbers in string...");
	}
}


