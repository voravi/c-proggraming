#include<stdio.h>
#include<string.h>
main()
{
	char str[100],str2[100];
	int i,j,count=0,n;
	
	printf("Enter any string :\n\n");
	gets(str);
	
	strcpy(str2,str);
	
//	puts(str2);
	
	strrev(str);
	
	printf("\n\nString in reverce : \n\n");
	puts(str);
	
	if(strcmp(str2,str) == 0)
	{
		printf("\n\nString is pelidomnal..");
	}
	else
	{
		printf("\n\nString is not a pelidomnal");
	}
}
