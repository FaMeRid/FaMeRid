#include<iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float x, m, k, c = 1, n, A, ss = 0, st, AA, nnnn, sss = 1, stt;
    int N;
    cout << "Задание №1." << endl;
    cout << "Введите цену на 1 кг конфет:" << endl;
    cin >> x;
    for (m = 0.1; m < 1.1; m += 0.1)
    {
        cout << m << " кг = " << x * m << "." << endl;

    }
    cout << "Задание №2." << endl;
    cout << "Введите количество сомножителей N:" << endl;
    cin >> N;
    for (k = 1; k <= N; k++)
    {
        c = c * (1 + 0.1 * k);
    }
    cout << c << endl;
    int nnn, cc = 1;
    cout << "Задание №3." << endl;
    cout << "Введите число:" << endl;
    cin >> n;
    for (int i = 1; cc < n * n - 2; )
    {
        i += 2;
        cc += i;
        if (cc != 900)
        {
            cout << "Промежуточная сумма = " << cc << "." << endl;

        }
        else if (cc == 900)
        {
            cout << "Квадрат введённого числа = " << cc << "." << endl;
        }

    }
    cout << "Задание №4." << endl;
    cout << "Введите число A:" << endl;
    cin >> A;
    cout << "Введите число N:" << endl;
    cin >> nnn;
    for (st = 1; st <= nnn; st++)
    {
        ss = ss + pow(A, st);


    }
    cout << ss + 1 << endl;
    cout << "Задание №5." << endl;
    cout << "Введите число A:" << endl;
    cin >> AA;
    cout << "Введите число N:" << endl;
    cin >> nnnn;
    for (stt = 1; stt <= nnnn; stt++)
    {
        sss += pow(-A, stt);


    }
    cout << sss;




    return 0;
}