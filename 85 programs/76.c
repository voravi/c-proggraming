#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	puts("Enter any string :");
	gets(str);
	
	strupr(str);
	
	puts(str);
}

