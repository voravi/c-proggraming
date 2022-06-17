#include<stdio.h>
#include<string.h>
main()
{
	char str[100],str2[100];
	
	puts("Enter any string :");
	gets(str);
	
	strcpy(str2,str);
	
	puts(str2);
}
