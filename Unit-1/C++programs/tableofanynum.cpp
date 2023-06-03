#include <iostream>
using namespace std;
int main()
{
	int i, number;

	cout << "Enter Any Number To Print Table \n";
	cin >> number;

	cout << "\n\nTable of " << number << " is Below \n\n";

	for (int i = 1; i <= 10; ++i)
	{
		cout << number << " *" << i << " = " << number * i << endl;
	}

	return 0;

}