#include <iostream>>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float X, Y, A, B;
	cout << "¬ведите X (кг шоколадных конфет)" << endl;
	cin >> X;
	cout << "¬ведите A (цена шоколадных конфет)" << endl;
	cin >> A;
	cout << "¬ведите Y (кг ирисок)" << endl;
	cin >> Y;
	cout << "¬ведите B (цена ирисок)" << endl;
	cin >> B;

	cout << "1 кг шоколадных конфет стоит " << A / X << " рублей" << endl;
	cout << "1 кг ирисок стоит " << B / Y << " рублей" << endl;
	cout << "Ўоколадные конфеты дороже ирисок в " << (A / X) / (B / Y) << " раз" << endl;
}