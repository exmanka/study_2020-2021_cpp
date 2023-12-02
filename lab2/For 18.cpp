// Ким Михаил НФИбд-01-20

#include <iostream>
#include <cmath>
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

	double sum = 0;
	for (int p = 0; p <= n; p++)
	{
		sum += pow(-1, p) * pow(a, p);
	}

	cout << "Значение выражения: " << sum << endl;

	return 0;
}
