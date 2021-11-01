
#include <iostream>
using namespace std;

int check(int number) {
    while (number < 0) {
        cout << "Неа введи нормально" << endl;
        cin >> number;
    }
    return number;
}

int main()
{
    setlocale(0, "");
    short menu, lenght, vector;
    char symb;


    cout << "                                                    чертильник" << endl;
    cout << "выберите тип фигуры" << endl;
    cout << "[1] - Прямая" << endl;
    cout << "[2] - Квадрат" << endl;
    cout << "[3] - Треугольник" << endl;
    cin >> menu;
    short  i = 0;
    switch (menu)
    {

    case 1:
        cout << "введите длину прямой" << endl;
        cin >> lenght;
        lenght = check(lenght);
        cout << endl;
        cout << "введите направление прямой [1] - горизонтальная [2] - вертикальная" << endl;
        cin >> vector;
        cout << endl;
        cout << "введите символ из которой будет состоять фигура" << endl << endl;
        cin >> symb;


        switch (vector)
        {
        case 1:
            while (i < lenght)
            {
                cout << symb;
                i++;
            }
            break;
        case 2:
            while (i < lenght)
            {
                cout << symb << endl;
                i++;
            }
            break;
        default:
            cout << "некорректные данные, карапитек иди кушай банан(К Алексеям Дмитриевичам не относится)" << endl;
            break;
        }
        break;


    case 2:
        int width;
        short square;
        cout << "введите длину четырехугольника" << endl;
        cin >> lenght;
        lenght = check(lenght);
        cout << endl;
        cout << "введите ширину четырехугольника" << endl;
        cin >> width;
        width = check(width);
        cout << endl;
        cout << "введите символ из которой будет состоять фигура" << endl << endl;
        cin >> symb;
        cout << "Выберите тип\n [1] Заполненный\n [2] Пустой" << endl << endl;
        cin >> square;

        switch (square)
        {
        case 1:

            while (i < width) {
                short l = 0;
                while (l < lenght)
                {
                    cout << symb;
                    l++;
                }
                cout << endl;
                i++;
            }
            break;

        case 2:

            while (i < width) {
                short l = 0;

                if (i == 0 || i == width - 1) {
                    while (l < lenght)
                    {
                        cout << symb;
                        l++;
                    }
                    i++;
                    cout << endl;
                }
                else {
                    cout << symb;
                    while (l < lenght - 2)
                    {
                        cout << " ";
                        l++;
                    }
                    cout << symb;
                    cout << endl;

                    i++;
                }
            }
            break;
        }

        break;

    case 3:


        short treugolnik;
        cout << "выберите тип треугольника [1] - закрашенный, [2] - пустой" << endl;
        cin >> treugolnik;
        switch (treugolnik)
        {
        case 1: {
            int hight, begin, finish, lenght;
            cout << "введите высоту треугольника" << endl;
            cin >> hight;
            lenght = hight * 2 - 1;
            begin = lenght / 2 + 1;
            finish = begin;

            for (int i = 0; i < hight;i++)
            {
                for (int j = 0; j < lenght;j++)
                {
                    if (j < begin)
                    {
                        cout << " ";
                    }
                    else if (j > begin && j < finish)
                    {
                        cout << "*";
                    }
                }
                begin--;
                finish++;
                cout << endl;
            }
        }
              break;
        case 2: {
            int hight, begin, finish, lenght;
            cout << "введите высоту треугольника" << endl;
            cin >> hight;
            lenght = hight * 2 - 1;
            begin = lenght / 2 + 1;
            finish = begin;

            for (int i = 0; i < hight;i++)
            {
                for (int j = 1; j < lenght+1;j++)
                {
                    if (i==hight-1)
                    {
                        cout << "*";
                    }
                    else if (j == begin || j == finish)
                    {
                        cout << "*";
                    }
                    else {
                        cout << " ";
                    }
                }
                begin--;
                finish++;
                cout << endl;
            }
        }
              break;


        }
        break;



    default:
        cout << "некорректные данные, карапитек иди кушай банан(К Алексеям Дмитриевичам не относится)" << endl;
        break;

    }


}