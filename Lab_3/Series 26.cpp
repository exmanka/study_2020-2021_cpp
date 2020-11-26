// Ким Михаил НФИбд-01-20

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int k;
	cout << "Введите целое число K: ";
	cin >> k;
	
	int n;
	cout << "Введите целое число N: ";
	cin >> n;
	cout << "\n";

	int element;
	for (int i = 1; i <= n; i++)
	{
		cout << "Введите элемент № " << i << ": ";
		cin >> element;
		cout << k << "-я степерь данного элемента: " << pow(element, k) << endl;
		cout << endl;
	}

	return 0;
}
