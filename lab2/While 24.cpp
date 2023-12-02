// Ким Михаил НФИбд-01-20

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int n;
	cout << "Введите целое число N (>1): ";
	cin >> n;
	cout << "\n";

	int F1 = 1, F2 = 2, FF;
	while (F2 < n)
	{
		FF = F1;
		F1 = F2;
		F2 = FF + F1;
	}

	if (F2 == n)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}

	return 0;
}
