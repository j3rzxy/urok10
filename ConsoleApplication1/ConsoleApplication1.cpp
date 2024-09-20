#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a1, b1, c1, s1, v1;
	string d1, f1, g1;
	cout << "Введите команду для действий:" << endl << "0 для соединения\n1 для сложения\n2 для умножения\n3 для деления\n4 для деления с остатком" << endl;
	cin >> a1;
	//cout << boolalpha;
	cout << (a1 == 1) << endl;
	if (a1 == 1) 
		{
		cout << "Введите 1 число" << endl;
		cin >> b1;
		cout << "Введите 2 число" << endl;
		cin >> c1;
		s1 = b1 + c1;
		cout << "Сумма двух чисел = " << s1 << endl;
		}
	else 
		if (a1 == 0)
		{
		cout << "Введите 1 слово" << endl;
		cin >> d1;
		cout << "Введите 2 слово" << endl;
		cin >> f1;
		g1 = d1 + " " + f1;
		cout << "Соединяем слова = " << g1 << endl;
		}
	else
		if (a1 == 2)
		{
			cout << "Введите 1 число" << endl;
			cin >> b1;
			cout << "Введите 2 число" << endl;
			cin >> c1;
			s1 = b1 * c1;
			cout << "Произведение чисел = " << s1 << endl;
		}
	else
		if (a1 == 3)
		{
			cout << "Введите 1 число" << endl;
			cin >> b1;
			cout << "Введите 2 число" << endl;
			cin >> c1;
			s1 = b1 / c1;
			cout << " Частное чисел = " << s1 << endl;
		}
	else
		if (a1 == 4)
		{
			cout << "Введите 1 число" << endl;
			cin >> b1;
			cout << "Введите 2 число" << endl;
			cin >> c1;
			s1 = b1 / c1;
			v1 = b1 % c1;
			if (s1 != v1)
			{
				cout << "Частное чисел = " << s1 << endl;
				cout << "Остаток = " << s1 << endl;
			}
			else 
			{
				cout << "Частное чисел = " << s1 << endl;
			}
		}
}
