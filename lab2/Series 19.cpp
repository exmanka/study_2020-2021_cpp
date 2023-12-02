// Ким Михаил НФИбд-01-20

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Введите целое число N (>1): ";
	int n;
	cin >> n;
	cout << "\n";

	int k = 0, right, left = 0;
	for (int i = 1; i <= n; i++)
	{
		cout << "Введите элемент № " << i << ": ";
		cin >> right;
		if ((right < left) && (i != 1))
		{
			++k;
			cout << "Элемент, который меньше элемента слева: " << right << endl;
		}
		left = right;
	}
	cout << "\nВсего таких элементов: "<< k << endl;
	

	return 0;
}
