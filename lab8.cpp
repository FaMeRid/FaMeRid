#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int bait, SW, ota, otb, kol = 0, r, dv, des, ed, tr, pos, vt, perv;
	cout << "Выберите номер задачи:\n";
	cout << "Задача № ";
	cin >> SW;
	switch (SW)
	{



	case 1:
		cout << "Введите размер файла в байтах:\n";
		cin >> bait;
		cout << "Размер файла в килобайтах равен " << bait / 1024 << "." << endl;
		break;
	case 2:
		cout << "Введите длины отрезков A и B соответственно: \n";
		cin >> ota >> otb;
		if (ota >= otb)
		{
			cout << "Количество отрезков B, размещённых на отрезке A равно " << ota / otb << "." << endl;
		}
		else
		{
			cout << "Отрезок В больше чем отрезок А";
		}
		break;
	case 3:
		cout << "Введите длины отрезков A и B соответственно: \n";
		cin >> ota >> otb;
		if (ota >= otb)
		{
			cout << "Незанятая часть отрезка A равна " << ota - otb << "." << endl;
		}
		else
		{
			cout << "Отрезок В больше чем отрезок А.";
		}
		break;
	case 4:
		cout << "Введите двухзначное число:\n";
		cin >> dv;
		des = dv / 10;
		ed = dv % 10;
		dv = ed * 10 + des;
		cout << "При перестановки цифр введённого числа получилось число " << dv << "." << endl;

		break;
	case 5:
		cout << "Введите трёхзначное число:\n";
		cin >> tr;
		perv = tr / 100;
		vt = tr / 10 % 10;
		pos = tr % 10;
		tr = pos * 100 + vt * 10 + perv;
		cout << "При перестановки цифр введённого числа получилось число " << tr << "." << endl;

	default:
		cout << "Вы ввели номер задачи некорректно." << endl;
		break;
	}
	return 0;
}