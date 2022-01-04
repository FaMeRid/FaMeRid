#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int  a, b, c;
	double  x, y, A, S, D, F;
	cout << "№1" << endl;
	cout << "введите переменные в порядке a, b " << endl;
	cin >> a >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << a << b;
	cout << "" << endl;

	cout << "№2" << endl;
	cout << "введите переменные в порядке a, b ,c" << endl;
	cin >> a >> c >> b;
	a = a ^ c;
	c = a ^ c;//a
	a = a ^ c;// c
	a = a ^ b;
	b = a ^ b;//c
	a = a ^ b;//b
	cout << a << b << c << endl;
	cout << "" << endl;

	cout << "№3" << endl;
	cout << "введите переменные в порядке a, b ,c" << endl;
	cin >> a >> b >> c;
	a = a ^ c;
	c = a ^ c;//a
	a = a ^ c;// c
	a = a ^ b;
	b = a ^ b;//c
	a = a ^ b;//b
	cout << a << b << c << endl;
	cout << "" << endl;

	cout << "№4" << endl;
	cout << "введите x" << endl;
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "ответ " << y << endl;
	cout << "" << endl;

	cout << "№5" << endl;
	cout << "введите x" << endl;
	cin >> x;
	y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
	cout << "ответ " << y << endl;
	cout << "" << endl;

	cout << "№6" << endl;
	cout << "введите A" << endl;
	cin >> A;
	S = A * A;
	D = S * S * S;
	cout << "ответ " << D << endl;
	cout << "" << endl;

	cout << "№7" << endl;
	cout << "введите A" << endl;
	cin >> A;
	S = A * A;
	D = S * A;
	F = D * D * D * D * D;
	cout << "ответ " << F << endl;
	cout << "" << endl;
	return 0;
}