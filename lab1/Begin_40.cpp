#include <iostream>>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float A1, A2, B1, B2, C1, C2, D, x, y;
	cout << "������� A1" << endl;
	cin >> A1;
	cout << "������� A2" << endl;
	cin >> A2;
	cout << "������� B1" << endl;
	cin >> B1;
	cout << "������� B2" << endl;
	cin >> B2;
	cout << "������� C1" << endl;
	cin >> C1;
	cout << "������� C2" << endl;
	cin >> C2;
	D = A1 * B2 - A2 * B1;
	x = (C1 * B2 - C2 * B1) / D;
	y = (A1 * C2 - A2 * C1) / D;
	cout << "������� ����:\nx = " << x << "\ny = " << y << endl;
}