#include <iostream>>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int K;
	cout << "������� ����� K (K-�� ���� ����)" << endl;
	cin >> K;
	cout << "����� ��� ������ ��� K-��� ���: " << (K + 3) % 7 << endl;
}