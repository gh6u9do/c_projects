#include <iostream>
using namespace std;

void clear()
{
    system("cls");
}

void changebackcolor()
{
    system("color 9F");
}

void changetextcolor()
{
    system("color A");
}

int countsizei()
{
     int a=sizeof(int);
     cout << a << " байт";
     return a;
}

int countsizec()
{
    int a = sizeof(char);
    cout << a << " байт";
    return a;
}

int countsized()
{
    int a = sizeof(double);
    cout << a << " байт";
    return a;
}

int countsizef()
{
    int a = sizeof(float);
    cout << a << " байт";
    return a;
}

int countsizeb()
{
    int a = sizeof(bool);
    cout << a << " байт";
    return a;
}

string tellhello()
{
    cout << "привет я функция";
    return "привет я функция";
}

int square()
{
    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= 5;j++) {

            if (j <= 5) {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}


int main()
{
    setlocale(0, "");

    cout << "выберите действие:"<<endl;
    cout << "[1] - очищение консоли"<<endl;
    cout << "[2] - изменение цвета фона консоли"<<endl;
    cout << "[3] - изменение цвета текста консоли"<<endl;
    cout << "[4] - вывод размера типа данных int"<<endl;
    cout << "[5] - вывод размера типа данных char"<<endl;
    cout << "[6] - вывод размера типа данных double" << endl;
    cout << "[7] - вывод размера типа данных float" << endl;
    cout << "[8] - вывод размера типа данных bool" << endl;
    cout << "[9] - вывод сообщения \"Привет я функция\"" << endl;
    cout << "[10] - вывод квадрата 5*5" << endl;

    short menu;
    cin >> menu;
    switch (menu)
    {
        case 1: clear();
            break;

        case 2: changebackcolor();
            break;

        case 3: changetextcolor();
            break;

        case 4: countsizei();
            break;

        case 5: countsizec();
            break;

        case 6: countsized();
            break;

        case 7: countsizef();
            break;

        case 8: countsizeb();
            break;

        case 9: tellhello();
            break;

        case 10: square();

        default:
            break;
     }
    return 0;
}

