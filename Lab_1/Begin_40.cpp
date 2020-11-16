#include <iostream>>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float A1, A2, B1, B2, C1, C2, D, x, y;
	cout << "Введите A1" << endl;
	cin >> A1;
	cout << "Введите A2" << endl;
	cin >> A2;
	cout << "Введите B1" << endl;
	cin >> B1;
	cout << "Введите B2" << endl;
	cin >> B2;
	cout << "Введите C1" << endl;
	cin >> C1;
	cout << "Введите C2" << endl;
	cin >> C2;
	D = A1 * B2 - A2 * B1;
	x = (C1 * B2 - C2 * B1) / D;
	y = (A1 * C2 - A2 * C1) / D;
	cout << "Решение СЛАУ:\nx = " << x << "\ny = " << y << endl;
}