#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
	char a[50];
	int i;
	cout << "Enter An Any  String:\t";
	gets(a);

	for (i = 0; a[i] != '\0'; ++i) {}

	cout << "\nLenth Of The Given String Given Below Is\n\n";
	cout << i << endl;
	return 0;

}