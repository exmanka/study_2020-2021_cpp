#include <iostream>>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int N;
	cout << "������� ����� N (����� ������)" << endl;
	cin >> N;
	cout << "����� �����, ��������� � ������ �����: " << N / 60 << endl;
}