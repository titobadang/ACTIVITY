#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float n;

    cout << "input a number" << endl;
    cin >> n;

    for (float i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    
    return 0;
}
