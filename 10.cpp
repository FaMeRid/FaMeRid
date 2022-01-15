#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int A, B, a, b, c, ch, tr, ed, des, st, chet, edd, dess, stt, tt, aa, bb, cc, a1, b1, c1, a2, b2, c2;
	cout << "Задание №1.\n" << "Введите числа A и B соответственно:\n";
	cin >> A >> B;
	if ((A > 2) && (B <= 3))
	{
		cout << "Неравенства справедливы." << endl;
	}
	else
	{
		cout << "Неравенства несправедливы." << endl;
	}
	cout << "\nЗадание №2.\n" << "Введите числа A, B и C соответственно:\n";
	cin >> a >> b >> c;
	if ((a < b) & (b < c))
	{
		cout << "Неравенство справедливо." << endl;
	}
	else
	{
		cout << "Неравенство несправедливо." << endl;
	}
	cout << "\nЗадание №3.\n" << "Введите целое положительное число:\n";
	cin >> ch;
	if (((ch > 9) & (ch < 100)) & (ch % 2 == 0))
	{
		cout << "Это высказывание истинно." << endl;
	}
	else
	{
		cout << "Это высказывание неистинно." << endl;
	}
	cout << "\nЗадание №4.\n" << "Введите трёхзначное число:\n";
	cin >> tr;
	ed = tr % 10;
	des = tr / 10 % 10;
	st = tr / 100;
	if (((st < des) & (des < ed)) || ((st > des) & (des > ed)))
	{
		cout << "Это высказывание истинно." << endl;
	}
	else
	{
		cout << "Это высказывание неистинно." << endl;
	}
	cout << "\nЗадание №5.\n" << "Введите четырёхзначное число:\n";
	cin >> chet;
	edd = chet % 10;
	dess = chet / 10 % 10;
	stt = chet / 100 % 10;
	tt = chet / 1000;
	if ((edd == tt) & (dess == stt))
	{
		cout << "Это высказывание истинно." << endl;
	}
	else
	{
		cout << "Это высказывание неистинно." << endl;
	}
	cout << "\nЗадание №6.\n" << "Введите стороны треугольника:\n";
	cin >> aa >> bb >> cc;
	a1 = pow(aa, 2);
	b1 = pow(bb, 2);
	c1 = pow(cc, 2);
	if ((a1 == b1 + c1) || (b1 == a1 + c1) || (c1 == a1 + b1))
	{
		cout << "Это высказывание истинно." << endl;
	}
	else
	{
		cout << "Это высказывание неистинно." << endl;
	}
	cout << "\nЗадание №7.\n" << "Введите стороны треугольника:\n";
	cin >> a2 >> b2 >> c2;
	if ((a2 < b2 + c2) & (b2 < a2 + c2) & (c2 < a2 + b2))
	{
		cout << "Это высказывание истинно." << endl;
	}
	else
	{
		cout << "Это высказывание неистинно." << endl;
	}

	return 0;
}