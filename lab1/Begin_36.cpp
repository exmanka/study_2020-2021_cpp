#include <iostream>>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	float V1, V2, S, T;
	cout << "������� V1 ��/� (�������� 1 ����������)" << endl;
	cin >> V1;
	cout << "������� V2 ��/� (�������� 2 ����������)" << endl;
	cin >> V2;
	cout << "������� S �� (����������)" << endl;
	cin >> S;
	cout << "������� T ����� (�����)" << endl;
	cin >> T;
	cout << "���������� ����� ������������ ���������� " << S + T * (V1 + V2) << " ����������" << endl;
}