#include <iostream>
#include <iomanip>

using namespace std;

struct Employee
{
	int Id;
	char Name[25];
	int Age;
	long Salary;
};

int main()
{
	int i, n;

	cout << "\nEnter The Number of Employee\n\n";
	cin >> n;

	Employee Emp[n];	

	for (i = 0; i < n; i++)
	{
		cout << "\nEnter Employee Details of " << i + 1 << " Employee" << endl;

		cout << setw(5) << "\nEnter Employee ID: ";
		cin >> Emp[i].Id;

		cout << setw(5) << "\nEnter Employee Name: ";
		cin >> Emp[i].Name;

		cout << setw(5) << "\nEnter Employee Age: ";
		cin >> Emp[i].Age;

		cout << setw(5) << "\nEnter Employee Salary: ";
		cin >> Emp[i].Salary;
	}

	cout << "\n\n------------------------------------------------------------\n";
	cout << "Display Employee Details";
	cout << "\n------------------------------------------------------------\n\n";

	cout << "ID" << setw(15) << "Name" << setw(10) << "Age" << setw(10) << "Salary";
	cout << endl;
	for (i = 0; i < n; i++)
	{
		cout << "\n" << Emp[i].Id << setw(15) << Emp[i].Name << setw(10) << Emp[i].Age << setw(10) << Emp[i].Salary;
	}

	cout << "\n\n------------------------------------------------------------\n";
}
