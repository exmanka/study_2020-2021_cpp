#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Введите вещественное число A:" << endl;
	float a;
	cin >> a;

	cout << "Введите целое число N (>0):" << endl;
	int n;
	cin >> n;

	double sum = 1, p = 1;
	for (int i = 0; i < n; i++)
	{

		p *= a * (-1);
		sum += p;
	}

	cout << "Значение выражения: " << sum << endl;

	return 0;
}
