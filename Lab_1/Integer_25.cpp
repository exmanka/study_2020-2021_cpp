#include <iostream>>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int K;
	cout << "Введите целое K (K-ый день года)" << endl;
	cin >> K;
	cout << "Номер дня недели для K-ого дня: " << (K + 3) % 7 << endl;
}