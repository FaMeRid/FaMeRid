#include <iostream>
using namespace std;
int fib(int n) {
    int f = 0;
    int res = 1;
    int f0 = 1;
    int i = 0;
    while (i <= n) {
        res = f;
        f = f0 + f;
        f0 = res;
        i++;
        if (n == f)
        {
            cout << "номер: ";
            return i;
        }
    }
    if (n == 0)
    {

        return 0;
    }
    else
    {
        cout << "ошибка ";
        return 404;
    }
}
int main()
{
    int a, b, N, k;
    float proc;
    setlocale(LC_ALL, "ru");
    cout << "Номер 1\n";
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    int i = a;
    cout << endl;
    for (i; i <= b; i++)
    {
        cout << endl;
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
    }
    cout << "\n__________________________\n";
    cout << "Номер 2\n";
    i = 0;
    cout << "введите длинну отрезка а: \n";
    cin >> a;
    cout << "введите длинну отрезка b: \n";
    cin >> b;
    while (a > b)
    {
        a -= b;
        i++;
    }
    cout << i << endl;
    cout << "\n__________________________\n";
    cout << "Номер 3\n";
    cout << "введите N:\n";
    cin >> N;
    k = 1;
    i = 1;
    while (i < N)
    {
        k += 1;
        i += k;
    }
    cout << "Наименьшее к = " << k << endl << "Сумма равна: " << i << endl;
    cout << "\n__________________________\n";
    cout << "Номер 4\n";
    cout << "Введите процент по вкладу(>0 <25) :";
    cin >> proc;
    if (proc < 0 || proc>25)
    {
        cout << "Нереальный процент :)";
        system("pause");
        return 1;
    }
    float deposit = 1000;
    int count = 0;
    while (deposit <= 1100)
    {
        deposit += deposit * proc / 100;
        count++;
    }

    std::cout << "До превышения лимита вклада на сумму 1100р. понадобится " << count << " месяца " << "\nсумма вклада составит " << deposit << " руб.";
    cout << "\n__________________________\n";
    cout << "Номер 5\n";
    long int A, B;
    cout << "Введите 2 числа: ";
    cin >> A >> B;
    while (A != B) {
        if (A > B)
            A = A - B;
        else
            B = B - A;
    }
    cout << "НОД этих чисел: " << A;
    cout << "\n__________________________\n";
    cout << "Номер 6\n";
    int n;
    cout << "Введите число Фибоначчи: \n";
    cin >> n;
    cout << fib(n);
    return 0;
}