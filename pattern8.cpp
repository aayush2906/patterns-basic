/*
   1
  121
 12321
1234321

pattern 8  
*/
main()
{
int k;
	for(int i=0;i<5;i++)
	{
		k=1;
		for(int j=0;j<8;j++)
		{
			if(j>=5-i&&j<=3+i)
			{
			cout<<k;
			j<4?k++:k--;
		}
			else
				cout<<" ";
		}
		cout<<endl;
	}
 } 
