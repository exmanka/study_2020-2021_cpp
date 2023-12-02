// Ким Михаил НФИбд-01-20

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Введите вещественное число E:" << endl;
	float e;
	cin >> e;

	double Ak1 = 1, Ak = 2, Ak2;
	int k = 2;
	while (abs(Ak - Ak1) >= e)
	{
		Ak2 = Ak1;
		Ak1 = Ak;
		Ak = (Ak2 + 2 * Ak1) / 3;
		++k;
	}

	cout << "K=" << k << endl;
	cout << "A(k-1)=" << Ak1 << ",\tA(k)=" << Ak << endl;

	return 0;
}
