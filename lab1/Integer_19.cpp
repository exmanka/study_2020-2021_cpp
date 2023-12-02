#include <iostream>>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int N;
	cout << "¬ведите целое N (число секунд)" << endl;
	cin >> N;
	cout << "„исло минут, прошедших с начала суток: " << N / 60 << endl;
}