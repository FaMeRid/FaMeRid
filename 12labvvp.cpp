#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int n, nn, des, ed, st, cmd, numd, numm, numdd;
    char chr;
    cout << "Задание №1." << endl;
    cout << "Введите номер дня: ";
    cin >> numd;
    cout << "Введите номер месяца: ";
    cin >> numm;
    cout << "Вы ввели: " << endl;
    if (numd < 10)
    {
        switch (numd)
        {
        case 1:
            cout << "Первое ";
            break;
        case 2:
            cout << "Второе ";
            break;
        case 3:
            cout << "Третье ";
            break;
        case 4:
            cout << "Четвёртое ";
            break;
        case 5:
            cout << "Пятое ";
            break;
        case 6:
            cout << "Шестое ";
            break;
        case 7:
            cout << "Седьмое ";
            break;
        case 8:
            cout << "Восьмое ";
            break;
        case 9:
            cout << "Девятое ";
            break;
        default:
            break;
        }
    }
    else if (numd > 9 && numd < 21)
    {
        switch (numd)
        {
        case 10:
            cout << "Десятое ";
            break;
        case 11:
            cout << "Одиннадцатое ";
            break;
        case 12:
            cout << "Двенадцатое ";
            break;
        case 13:
            cout << "Тринадцатое ";
            break;
        case 14:
            cout << "Четырнадцатое ";
            break;
        case 15:
            cout << "Пятнадцатое ";
            break;
        case 16:
            cout << "Шестнадцатое ";
            break;
        case 17:
            cout << "Семнадцатое ";
            break;
        case 18:
            cout << "Восемнадцатое ";
            break;
        case 19:
            cout << "Девятнадцатое ";
            break;
        case 20:
            cout << "Двадцатое ";
        default:
            break;
        }
    }
    else if (numd > 20 && numd < 30)
    {
        cout << "Двадцать ";
        numdd = numd % 10;
        switch (numdd)
        {
        case 1:
            cout << "Первое ";
            break;
        case 2:
            cout << "Второе ";
            break;
        case 3:
            cout << "Третье ";
            break;
        case 4:
            cout << "Четвёртое ";
            break;
        case 5:
            cout << "Пятое ";
            break;
        case 6:
            cout << "Шестое ";
            break;
        case 7:
            cout << "Седьмое ";
            break;
        case 8:
            cout << "Восьмое ";
            break;
        case 9:
            cout << "Девятое ";
            break;

        default:
            break;
        }
    }
    else if (numd >= 30)
    {
        switch (numd)
        {
        case 30:
            cout << "Тридцатое ";
            break;
        case 31:
            cout << "Тридцать первое ";
            break;
        default:
            break;
        }
    }
    else
    {
        cout << "Вы ввели число не из диапазона.";
    }
    switch (numm)
    {
    case 1:
        cout << "января.";
        break;
    case 2:
        cout << "февраля.";
        break;
    case 3:
        cout << "марта.";
        break;
    case 4:
        cout << "апреля.";
        break;
    case 5:
        cout << "мая.";
        break;
    case 6:
        cout << "июня.";
        break;
    case 7:
        cout << "июля.";
        break;
    case 8:
        cout << "августа.";
        break;
    case 9:
        cout << "сентября.";
        break;
    case 10:
        cout << "октября.";
        break;
    case 11:
        cout << "ноября.";
        break;
    case 12:
        cout << "декабря.";
        break;
    default:
        break;
    }
    cout << "\n________________________________________________________\n";
    cout << "\n\n\nЗадание №2" << endl;
    cout << "Выберите букву, которой обозначается направление:" << endl;
    cout << "1.Юг - S." << endl;
    cout << "2.Север - N." << endl;
    cout << "3.Запад - W." << endl;
    cout << "4.Восток - E." << endl;
    cin >> chr;
    cout << "Выберите команду для движения робота" << endl;
    cout << "0 — продолжать движение." << endl;
    cout << "1 — поворот налево." << endl;
    cout << "-1 — поворот направо." << endl;
    cin >> cmd;
    if (chr = 'S')
    {
        chr = 1;
    }
    else if (chr = 'N')
    {
        chr = 2;
    }
    else if (chr = 'W')
    {
        chr = 3;
    }
    else if (chr = 'E')
    {
        chr = 4;
    }
    switch (chr)
    {
    case 1:

        switch (cmd)
        {
        case 0:
            cout << "Робот будет продолжать вдижение на юг." << endl;
            break;
        case 1:
            cout << "Робот будет двигаться на восток." << endl;
            break;
        case -1:
            cout << "Робот будет двигаться на запад." << endl;
            break;
        default:
            break;
        }
        break;
    case 2:
        switch (cmd)
        {
        case 0:
            cout << "Робот будет продолжать вдижение на север." << endl;
            break;
        case 1:
            cout << "Робот будет двигаться на запад." << endl;
            break;
        case -1:
            cout << "Робот будет двигаться на восток." << endl;
            break;
        default:
            break;
        }
        break;
    case 3:
        switch (cmd)
        {
        case 0:
            cout << "Робот будет продолжать вдижение на запад." << endl;
            break;
        case 1:
            cout << "Робот будет двигаться на юг." << endl;
            break;
        case -1:
            cout << "Робот будет двигаться на север." << endl;
            break;
        default:
            break;
        }
        break;
    case 4:
        switch (cmd)
        {
        case 0:
            cout << "Робот будет продолжать вдижение на восток." << endl;
            break;
        case 1:
            cout << "Робот будет двигаться на север." << endl;
            break;
        case -1:
            cout << "Робот будет двигаться на юг." << endl;
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
    cout << "________________________________________________________\n";
    cout << "\n\nЗадание #3" << endl;
    cout << "Введите число из диапазона 10-40:\n";
    cin >> n;
    if (n > 9 && n < 41)
    {


        if (n / 10 == 1)
        {
            switch (n) {
            case 10:
                cout << "десять учебных заданий." << endl;
                break;
            case 11:
                cout << "Одиннадцать учебных заданий." << endl;
                break;
            case 12:
                cout << "Двенадцать учебных заданий." << endl;
                break;
            case 13:
                cout << "Тринадцать учебных заданий." << endl;
                break;
            case 14:
                cout << "Четырнадцать учебных заданий." << endl;
                break;
            case 15:
                cout << "Пятнадцать учебных заданий." << endl;
                break;
            case 16:
                cout << "Шестнадцать учебных заданий." << endl;
                break;
            case 17:
                cout << "Семнадцать учебных заданий." << endl;
                break;
            case 18:
                cout << "Восемнадцать учебных заданий." << endl;
                break;
            case 19:
                cout << "Девятнадцать учебных заданий." << endl;
                break;
            }
        }
        else {
            switch (n / 10) {
            case 2:
                cout << "Двадцать ";
                break;
            case 3:
                cout << "Тридцать ";
                break;
            case 4:
                cout << "Сорок ";
                break;
            }
            switch (n % 10) {
            case 1:
                cout << "одно ";
                break;
            case 2:
                cout << "два ";
                break;
            case 3:
                cout << "три ";
                break;
            case 4:
                cout << "четыре ";
                break;
            case 5:
                cout << "пять ";
                break;
            case 6:
                cout << "шесть ";
                break;
            case 7:
                cout << "семь ";
                break;
            case 8:
                cout << "восемь ";
                break;
            case 9:
                cout << "девять ";
                break;
            }
        }
        switch (n % 10) {
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            cout << "учебных заданий." << endl;
            break;
        case 1:
            cout << "учебное задание." << endl;
            break;
        case 2:
        case 3:
        case 4:
            cout << "учебных задания." << endl;
            break;
        }
    }
    else
    {
        cout << "Вы ввели число, находящееся вне границ диапазона." << endl;
    }

    cout << "________________________________________________________\n";
    cout << "\n\nЗадание №4\n" << endl;
    cout << "Введите число из диапазона 100-999:\n";
    cin >> nn;
    st = nn / 100;
    des = nn / 10 % 10;
    ed = nn % 10;
    if ((nn >= 100) && (nn <= 999))
    {


        switch (st)
        {
        case 1:
            cout << "Сто";
            break;
        case 2:
            cout << "Двести";
            break;
        case 3:
            cout << "Триста";
            break;
        case 4:
            cout << "Четыреста";
            break;
        case 5:
            cout << "Пятьсот";
            break;
        case 6:
            cout << "Шестьсот";
            break;
        case 7:
            cout << "Семьсот";
            break;
        case 8:
            cout << "Восемьсот";
            break;
        case 9:
            cout << "Девятьсот";
            break;
        default:
            break;
        }

        if (des > 1)
        {
            switch (des)
            {
            case 2:
                cout << " двадцать";
                break;
            case 3:
                cout << " тридцать";
                break;
            case 4:
                cout << " сорок";
                break;
            case 5:
                cout << " пятьдесят";
                break;
            case 6:
                cout << " шестьдесят";
                break;
            case 7:
                cout << " семьдесят";
                break;
            case 8:
                cout << " восемьдесят";
                break;
            case 9:
                cout << " девяносто";
                break;
            default:
                break;
            }
        }
        else if (des == 1)
        {
            switch (nn % 100)
            {
            case 10:
                cout << " десять";
                break;
            case 11:
                cout << " одиннадцать";
                break;
            case 12:
                cout << " двенадцать";
                break;
            case 13:
                cout << " тринадцать";
                break;
            case 14:
                cout << " четырнадцать";
                break;
            case 15:
                cout << " пятнадцать";
                break;
            case 16:
                cout << " шестнадцать";
                break;
            case 17:
                cout << " семнадцать";
                break;
            case 18:
                cout << " восемнадцать";
                break;
            case 19:
                cout << " девятнадцать";
                break;
            default:
                break;
            }
        }
        else if (des == 0)
        {
            switch (ed)
            {
            case 1:
                cout << " один";
                break;
            case 2:
                cout << " два";
                break;
            case 3:
                cout << " три";
                break;
            case 4:
                cout << " четыре";
                break;
            case 5:
                cout << " пять";
                break;
            case 6:
                cout << " шесть";
                break;
            case 7:
                cout << " семь";
                break;
            case 8:
                cout << " восемь";
                break;
            case 9:
                cout << " девять";
                break;

            default:
                break;
            }
        }
        if ((des != 0) && (des != 1))
        {
            switch (ed)
            {
            case 1:
                cout << " один";
                break;
            case 2:
                cout << " два";
                break;
            case 3:
                cout << " три";
                break;
            case 4:
                cout << " четыре";
                break;
            case 5:
                cout << " пять";
                break;
            case 6:
                cout << " шесть";
                break;
            case 7:
                cout << " семь";
                break;
            case 8:
                cout << " восемь";
                break;
            case 9:
                cout << " девять";
                break;

            default:
                break;
            }
        }
        cout << ".";
    }
    else
    {
        cout << "Вы ввели число, находящееся вне границ данного промежутка чисел. ";
    }
    cout << "\n________________________________________________________\n";
    cout << "\nЗадание №5." << endl;
    int z;
    cout << "Введите год:";
    cin >> z;

    cout << "Это год ";

    switch ((z) % 10) {
    case 0:
    case 1:
        cout << "бел";
        break;
    case 2:
    case 3:
        cout << "черн";
        break;
    case 4:
    case 5:
        cout << "зелён";
        break;
    case 6:
    case 7:
        cout << "красн";
        break;
    case 8:
    case 9:
        cout << "жёлт";
        break;
    }

    switch ((z + 1) % 5) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 11:
        cout << "ой ";
        break;
    case 6:
    case 7:
    case 8:
        cout << "ого ";
        break;
    }

    switch ((z + 8) % 12) {
    case 0:
        cout << "крысы";
        break;
    case 1:
        cout << "коровы";
        break;
    case 2:
        cout << "тигра";
        break;
    case 3:
        cout << "зайца";
        break;
    case 4:
        cout << "дракона";
        break;
    case 5:
        cout << "змеи";
        break;
    case 6:
        cout << "лошади";
        break;
    case 7:
        cout << "овцы";
        break;
    case 8:
        cout << "обезьяны";
        break;
    case 9:
        cout << "курицы";
        break;
    case 10:
        cout << "собаки";
        break;
    case 11:
        cout << "свиньи";
        break;
    }

    return 0;
}