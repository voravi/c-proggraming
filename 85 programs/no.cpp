#include<iostream>
#include<string.h>
using namespace std;

/*

1 2 3 4 5 5 4 3 2 1
1 2 3 4     4 3 2 1
1 2 3         3 2 1
1 2             2 1
1                 1

*/

int main()
{
	int i,j,k,l,m;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout << j << " ";
		}
		for(k=5;k>i;k--)
		{
			cout << "  ";
		}
		for(k=5;k>i;k--)
		{
			cout << "  ";
		}
		for(m=i;m>=1;m--)
		{
			cout << m << " ";
		}
		cout << endl;
	}
	
	return 0;
}

