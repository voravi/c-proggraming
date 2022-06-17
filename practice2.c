/*WAP to detect if a given string contains any special symbols or not.*/

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
			b++;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			b++;
		}
		else if(str[i] ==' ')
		{
			a++;
		}
		else
		{
			c++;
		}
	}
	
	if(c > 0)
	{
		printf("\n\nString have special symbol...");
	}
	else
	{
		printf("\n\nNo special symbol in string...");
	}
}

