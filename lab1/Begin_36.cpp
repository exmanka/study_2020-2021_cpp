#include <iostream>>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	float V1, V2, S, T;
	cout << "Введите V1 км/ч (скорость 1 автомобиля)" << endl;
	cin >> V1;
	cout << "Введите V2 км/ч (скорость 2 автомобиля)" << endl;
	cin >> V2;
	cout << "Введите S км (расстояние)" << endl;
	cin >> S;
	cout << "Введите T часов (время)" << endl;
	cin >> T;
	cout << "Расстояние между автомобилями составляет " << S + T * (V1 + V2) << " километров" << endl;
}