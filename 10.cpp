#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int A, B, a, b, c, ch, tr, ed, des, st, chet, edd, dess, stt, tt, aa, bb, cc, a1, b1, c1, a2, b2, c2;
	cout << "������� �1.\n" << "������� ����� A � B ��������������:\n";
	cin >> A >> B;
	if ((A > 2) && (B <= 3))
	{
		cout << "����������� �����������." << endl;
	}
	else
	{
		cout << "����������� �������������." << endl;
	}
	cout << "\n������� �2.\n" << "������� ����� A, B � C ��������������:\n";
	cin >> a >> b >> c;
	if ((a < b) & (b < c))
	{
		cout << "����������� �����������." << endl;
	}
	else
	{
		cout << "����������� �������������." << endl;
	}
	cout << "\n������� �3.\n" << "������� ����� ������������� �����:\n";
	cin >> ch;
	if (((ch > 9) & (ch < 100)) & (ch % 2 == 0))
	{
		cout << "��� ������������ �������." << endl;
	}
	else
	{
		cout << "��� ������������ ���������." << endl;
	}
	cout << "\n������� �4.\n" << "������� ���������� �����:\n";
	cin >> tr;
	ed = tr % 10;
	des = tr / 10 % 10;
	st = tr / 100;
	if (((st < des) & (des < ed)) || ((st > des) & (des > ed)))
	{
		cout << "��� ������������ �������." << endl;
	}
	else
	{
		cout << "��� ������������ ���������." << endl;
	}
	cout << "\n������� �5.\n" << "������� ������������� �����:\n";
	cin >> chet;
	edd = chet % 10;
	dess = chet / 10 % 10;
	stt = chet / 100 % 10;
	tt = chet / 1000;
	if ((edd == tt) & (dess == stt))
	{
		cout << "��� ������������ �������." << endl;
	}
	else
	{
		cout << "��� ������������ ���������." << endl;
	}
	cout << "\n������� �6.\n" << "������� ������� ������������:\n";
	cin >> aa >> bb >> cc;
	a1 = pow(aa, 2);
	b1 = pow(bb, 2);
	c1 = pow(cc, 2);
	if ((a1 == b1 + c1) || (b1 == a1 + c1) || (c1 == a1 + b1))
	{
		cout << "��� ������������ �������." << endl;
	}
	else
	{
		cout << "��� ������������ ���������." << endl;
	}
	cout << "\n������� �7.\n" << "������� ������� ������������:\n";
	cin >> a2 >> b2 >> c2;
	if ((a2 < b2 + c2) & (b2 < a2 + c2) & (c2 < a2 + b2))
	{
		cout << "��� ������������ �������." << endl;
	}
	else
	{
		cout << "��� ������������ ���������." << endl;
	}

	return 0;
}