// Ким Михаил НФИбд-01-20

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите цену 1 кг конфет (вещественное число):" << endl;
	float cost;
	cin >> cost;

	for (int i = 1; i < 11; i++)
	{
		cout << "Стоимость " << i << " кг конфет равна " << cost * i << endl;
	}
	return 0;
}
