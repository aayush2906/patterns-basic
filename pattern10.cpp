/*

    *****
   *****
  *****
 *****
 
 */
 
 main()
{	
	for(int i=1;i<5;i++)
		{	
			for(int j=0;j<9;j++)
			{
				if(j<=9-i&&j>=5-i)
					{	
					cout<<"*";
					}	
				else
					cout<<" ";
			}
			cout<<endl;
		}
}

