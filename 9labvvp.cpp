#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int n, K, k, N, c, a, b, sp, sk, h, year, st, pc;
	cout << "??????? ?1.\n" << "??????? ?????????? ?????? n, ??????? ?????? ? ?????? ?????: ";
	cin >> N;
	cout << "?????????? ??????, ????????? ? ?????? ????????? ?????? ????? " << N % 60 << ".\n" << endl;

	cout << "??????? ?2.\n" << "??????? ????? ??? K, ????????????? ? ????????? 1-365: ";
	cin >> K;
	cout << "????? ??? ?????? K ????? " << K % 7 << ".\n" << endl;

	cout << "??????? ?3.\n" << "??????? ????? ??? K, ????????????? ? ????????? 1-365: ";
	cin >> k;
	cout << "??????? ????? ??? ?????? N ??? 1 ??????, ????????????? ? ????????? 1-7: ";
	cin >> n;
	c = ((k + n - 2) % 7) + 1;
	if (c == 1)
	{
		cout << "???????????, ?? ???? ?????? ???? ??????." << endl;
	}
	else if (c == 2)
	{
		cout << "???????, ?? ???? ?????? ???? ??????." << endl;
	}
	else if (c == 3)
	{
		cout << "?????, ?? ???? ?????? ???? ??????." << endl;
	}
	else if (c == 4)
	{
		cout << "???????, ?? ???? ????????? ???? ??????." << endl;
	}
	else if (c == 5)
	{
		cout << "???????, ?? ???? ????? ???? ??????." << endl;
	}
	else if (c == 6)
	{
		cout << "???????, ?? ???? ?????? ???? ??????." << endl;
	}
	else if (c == 7)
	{
		cout << "???????????, ?? ???? ??????? ???? ??????." << endl;
	}


	cout << "\n??????? ?4.\n" << "??????? ??????? ?????????????? A ? B:\n";
	cin >> a >> b;
	sp = a * b;
	cout << "??????? ?????????????? ????? " << sp << ".\n";
	cout << "??????? ??????? ???????? ?:\n";
	cin >> c;
	sk = c * c;
	cout << "??????? ????????  ????? " << sk << ".\n";
	h = sp / sk;
	cout << "?????????? ?????????, ??????????? ?? ?????????????? ????? " << h << "." << endl
		<< "??????? ????????? ????? ?????????????? ????? " << sp - sk * h << "." << endl;

	cout << "\n??????? ?5.\n" << "??????? ???: ";
	cin >> year;
	pc = year % 100;
	st = year / 100;
	if (pc > 0)
	{
		cout << "??? " << st + 1 << " ????????." << endl;
	}
	else
	{
		cout << "??? " << st << " ????????." << endl;
	}



	return 0;
}