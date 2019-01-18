/*pattern 6
    *
   * *
  * * *
 * * * *
* * * * *

*/

main()
{

for(int i=1;i<6;i++)
	{
	for(int j=1;j<10;j++)
	{
		if(((i%2==0&&j%2==0)or(i%2!=0&&j%2!=0))&&(j>=6-i&&j<=4+i))
		cout<<"*";
		else
		cout<<" ";
		
	}
	cout<<"\n";
}
}
