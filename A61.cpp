#include <iostream>
using namespace std;


int main()
{
	int pnum1, pnum2, pnum3;
    int pnum1a, pnum2a, pnum3a;

	/*********************************
	Make Your Code
	*********************************/
	
	cout << "Enter in a prime number: " << endl;
	cin >> pnum1;
    
    while (pnum1 < 0)
		{
			cout << "Invalid: Enter in a prime number: " << endl;
			cin >> pnum1;
			pnum1a *= -1;
            for(int i = 2; i <= (pnum1a/2); i++)
			{
				if (pnum1a % i == 0 || pnum1a != 1)
					break;
			}
		}
	for(int i = 2; i<=(pnum1/2); i++)
		{
			while ( pnum1 % i != 0 || pnum1 == 1)
			{
				cout << "Invalid: Enter in a prime number: " << endl;
				cin >> pnum1;
			}
			if (pnum1 % i == 0 || pnum1 != 1)
				break;
		}
    
    
	cout << "Enter in a prime number: " << endl;
	cin >> pnum2;

    while (pnum2 < 0)
		{
			cout << "Invalid: Enter in a prime number: " << endl;
			cin >> pnum2;
			pnum2a *= -1;
            for(int i =2; i<= (pnum2a/2); i++)
			{
				if (pnum2a % i != 0 || pnum2a != 1)
				break;
			}
		}
	for(int i =2; i<pnum2; i++)
		{
			while ( pnum2 % i != 0 || pnum2 == 1)
			{
				cout << "Invalid: Enter in a prime number: " << endl;
				cin >> pnum2;
			}
			if (pnum2 % i == 0 || pnum2 != 1)
				break;
		}
    
	cout << "Enter in a prime number: " << endl;
	cin >> pnum3;
    while (pnum3 < 0)
		{
			cout << "Invalid: Enter in a prime number: " << endl;
			cin >> pnum3;
			pnum3a *= -1;
            for(int i =2; i<=(pnum3a/2); i++)
        	{
				if (pnum3a % i != 0 || pnum3a != 1)
				break;
			}
		}
	for(int i =2; i<= (pnum3/2); i++)
        {
			while ( pnum3 % i != 0 || pnum3 == 1)
			{
				cout << "Invalid: Enter in a prime number: " << endl;
				cin >> pnum3;
			}
			if (pnum3 % i == 0 || pnum3 != 1)
				break;
		}
    
    
	cout << "Prime numbers: " << pnum1 << ", " << pnum2 << ", " << pnum3;
}


