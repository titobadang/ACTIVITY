#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
	int x, sum=0;
	
	do
	{
      cout<<"Please enter a number"<<endl;
      cin>> x;
	  for(int i = 0; i <= x; i++)
							
			{
		sum+=i;
				}
		cout<<sum<<endl;
				}
		while(x>0);
				
				
		do{
	    cout<<"Thank You"<<endl;
		system("pause");
								
} 
	 while(x<=0);
				
				return 0;
}
