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
            cout << "�����: ";
            return i;
        }
    }
    if (n == 0)
    {

        return 0;
    }
    else
    {
        cout << "������ ";
        return 404;
    }
}
int main()
{
    int a, b, N, k;
    float proc;
    setlocale(LC_ALL, "ru");
    cout << "����� 1\n";
    cout << "������� a: ";
    cin >> a;
    cout << "������� b: ";
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
    cout << "����� 2\n";
    i = 0;
    cout << "������� ������ ������� �: \n";
    cin >> a;
    cout << "������� ������ ������� b: \n";
    cin >> b;
    while (a > b)
    {
        a -= b;
        i++;
    }
    cout << i << endl;
    cout << "\n__________________________\n";
    cout << "����� 3\n";
    cout << "������� N:\n";
    cin >> N;
    k = 1;
    i = 1;
    while (i < N)
    {
        k += 1;
        i += k;
    }
    cout << "���������� � = " << k << endl << "����� �����: " << i << endl;
    cout << "\n__________________________\n";
    cout << "����� 4\n";
    cout << "������� ������� �� ������(>0 <25) :";
    cin >> proc;
    if (proc < 0 || proc>25)
    {
        cout << "���������� ������� :)";
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

    std::cout << "�� ���������� ������ ������ �� ����� 1100�. ����������� " << count << " ������ " << "\n����� ������ �������� " << deposit << " ���.";
    cout << "\n__________________________\n";
    cout << "����� 5\n";
    long int A, B;
    cout << "������� 2 �����: ";
    cin >> A >> B;
    while (A != B) {
        if (A > B)
            A = A - B;
        else
            B = B - A;
    }
    cout << "��� ���� �����: " << A;
    cout << "\n__________________________\n";
    cout << "����� 6\n";
    int n;
    cout << "������� ����� ���������: \n";
    cin >> n;
    cout << fib(n);
    return 0;
}