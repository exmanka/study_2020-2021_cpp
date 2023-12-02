#include <iostream>>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int L;
	cout << "Введите расстояние L в сантиметрах" << endl;
	cin >> L;
	cout << "Количество полных метров в L: " << L / 100 << endl;
}