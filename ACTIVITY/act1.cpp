
#include<conio.h>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	float Hour, Bill1, Bill2;
	int a;
	
	cout << "indicate which package you are using" << endl;
	cout << "1 for A, 2 for B, 3 for C" << endl;
	cin >> a;
	cout << "usage in hours" << endl;
	cin >> Hour;
		
	Bill1 = ( Hour * 20 ) + 995; 
	Bill2 = ( Hour * 10) + 1495;
	{
	if (a==1)
	cout << Bill1<<"/"<<"month" << endl;
	else if (a==2)
	cout << Bill2<<"/"<<"month" << endl;
	else if (a==3)
	cout << "1995/month, no additional fees for extra hours" << endl;
	else
	
	cout << "Invalid" << endl;
	
	return 0;
	}
}
