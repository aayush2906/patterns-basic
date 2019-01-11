/* Pattern 1

*
**
***
****
*****

*/
#include<iostream>

using namespace std;

main()
{
int n;
cout<<"Enter the no.of rows";
cin>>n;
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<n+1;j++)
		{
			if(j<=i)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<"\n";
	}
}
