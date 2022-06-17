#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	int i;
	
	puts("Enter string :");
	gets(str);
	
//Initializing for loop.
  	for (i = 0; str[i]!='\0'; i++)
  	{
  	    //Toggling characters.
  	    if(str[i] >= 'A' && str[i] <= 'Z') 
            { 
              str[i] = str[i] + 32; 
            } 
            else if(str[i] >= 'a' && str[i] <= 'z')
            {
  	      str[i] = str[i] - 32;
	    }		
  		
  	}

  	printf("\n Toggoled string: %s", str);//Print toggled string.
  	
}
