// Lab_03_4.cpp
// < ������, ������� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 8
#include <iostream>
using namespace std;
int main()
{
	double R; // ������� ��������
	double x; // ������� ��������
	double y; // ������� ��������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	
	// ������������ � ����� ����
	if ((x*x + y*y <= R*R && y >= 0 && x >= 0) || (x*x + y*y <= R*R && y <= 0 && x >= 0) || (y >= 0 && x <= 0 && y <= R && y >= R*sqrt(2)) || (y <= 0 && x <= 0 && y >= -R && y <= R*sqrt(2)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}