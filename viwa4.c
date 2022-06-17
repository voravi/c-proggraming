#include<stdio.h>
main()
{
	char str[100];
	int i;
	
	printf("Enter any string :\n\n");
	
	gets(str);
	
	for(i=0; str[i]; i++)
	{
		 if(str[i]>=65 && str[i]<=90)
		 {
		 	str[i] += 32;	
		 }
        else if(str[i]>=97 && str[i]<=122)
        {
        	str[i] -= 32;	
		}
	}
	
	printf("\n\nAfter toggle case :\n\n");
	
	
	puts(str);
}

