#include "stdafx.h"
#include "iostream"
#include "conio.h"
using namespace std;

int main()
{
	float left, right, result; char sign;
	setlocale(0, "");
	cout << "������� ����� �������: " << endl;
	cin >> left;
	cout << "������� ������ �������: " << endl;
	cin >> right;
	cout << "������� ���� ���������:" << endl;
	cin >> sign;
		while (!(sign == '+' || sign == '-' || sign == '*' || sign == '/'))
			{
			cout << "������� ���������� ����: " << endl;
			cin >> sign;
			}

		switch (sign)
			{
			case'+':
				result = left + right;
				break;
			case'-':
				result = left - right;
				break;
			case'*':
				result = left*right;
				break;
			case'/':
				if (right == 0) 
					{
					cout << "�� ���� ������ ������!";
					_getch();
					return 0;
					}
				else 
					{
					result = left / right;
					break;
					}
			}

	cout << "���������: " << endl << left << sign << right << "=" << result;
	_getch();
	return 0;
}