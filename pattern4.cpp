 /*  
   
    *
   **
  ***
 ****
*****  

*/
main()
{  //patern 4
	for(int i=1;i<6;i++)
	{
		for(int j=1;j<6;j++)
		{
			if(j>=6-i)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<"\n";
	}
}
