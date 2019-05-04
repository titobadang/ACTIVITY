
#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	float x, y, z;
	
	cout << "Input first number" << endl;
	cin >> x;
	
	cout << "second number"<< endl;
	cin >> y;
	
	cout << "third number" << endl;
	cin >> z;
	
	if (x>z && x>y)
	cout << x << " is the largest number" << endl;
	else if (y>x && y>z)
	cout << y << " is the largest number" << endl;
	else if (z>x && z>y)
	cout << z << " is the largest number" << endl;
	else if (x==y && y==z && x==z)
	cout << "The numbers are of equal value" << endl;
	else
	cout << "repeat and make a correct input" << endl;
	
	return 0;
}
