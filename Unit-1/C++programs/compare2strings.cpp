#include <bits/stdc++.h>
using namespace std;
int main()
{
	char str1[20], str2[20], i = 0, j = 0, flag = 0;

	cout << "\n\nEnter First String : \n";
	gets(str1);

	cout << "Enter Second String : \n";
	gets(str2);

	while (str1[i] != '\0')
	{
		i++;
	}

	while (str2[j] != '\0')
	{
		j++;
	}

	if (i != j)
	{
		flag = 0;
	}
	else
	{
		for (i = 0, j = 0; str1[i] != '\0', str2[j] != '\0'; i++, j++)
		{
			if (str1[i] == str2[j])
			{
				flag = 1;
			}
			else
			{
				flag = 0;
			}
		}
	}

	if (flag == 0)
	{
		cout << "Both Strings Are Not Equal\n";
	}
	else
	{
		cout << "Both Strings Are Equal\n";
	}

	return 0;
}
