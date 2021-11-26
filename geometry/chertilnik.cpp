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
    short menu, lenght, vector, choise;
    char symb;
    string word;


    cout << "                                                    чертильник" << endl;
    cout << "выберите тип фигуры" << endl;
    cout << "[1] - Прямая" << endl;
    cout << "[2] - Квадрат" << endl;
    cout << "[3] - Прямоугольник" << endl;
    cout << "[4] - Треугольник" << endl;
    cout << "[5] - Решетка" << endl;
    cout << "[6] - Косой крест" << endl;
    cout << "[7] - Плюсик" << endl;
    cout << "[407] - Пасхалка " << endl;
    cin >> menu;
    short  i = 0;
    switch (menu)
    {

    case 1: {
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
        case 1: {
            while (i < lenght)
            {
                cout << symb;
                i++;
            }
        }
              break;
        case 2: {
            while (i < lenght)
            {
                cout << symb << endl;
                i++;
            }
        }
              break;
        default: {
            cout << "некорректные данные, карапитек иди кушай банан(К Алексеям Дмитриевичам не относится)" << endl;
        }
               break;
        }
    }
          break;
    case 2: {

        cout << "введите длину ребра квадрата" << endl;
        cin >> lenght;
        lenght = check(lenght);
        cout << "введите символ из которой будет состоять фигура" << endl << endl;
        cin >> symb;
        cout << "Выберите тип\n [1] Заполненный\n [2] Пустой" << endl << endl;
        cin >> choise;
        switch (choise)
        {
        case 1: {

            while (i < lenght) {
                short l = 0;
                while (l < lenght)
                {
                    cout << symb << " ";
                    l++;
                }
                cout << endl;
                i++;
            }
        }
              break;

        case 2: {

            while (i < lenght) {
                short l = 0;

                if (i == 0 || i == lenght - 1) {
                    while (l < lenght)
                    {
                        cout << symb << " ";
                        l++;
                    }
                    i++;
                    cout << endl;
                }
                else {
                    cout << symb << "  ";
                    while (l < lenght - 2)
                    {
                        cout << "  ";
                        l++;
                    }
                    cout << symb << "  ";
                    cout << endl;

                    i++;
                }
            }
        }
              break;

        default: {
            cout << "некорректные данные, карапитек иди кушай банан(К Алексеям Дмитриевичам не относится)" << endl;
        }
               break;

        }

    }
          break;

    case 3: {
        int width;

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
        cin >> choise;


        switch (choise)
        {
        case 1: {

            while (i < width) {
                short l = 0;
                while (l < lenght)
                {
                    cout << symb << "  ";
                    l++;
                }
                cout << endl;
                i++;
            }
        }
              break;

        case 2: {

            while (i < width) {
                short l = 0;

                if (i == 0 || i == width - 1) {
                    while (l < lenght)
                    {
                        cout << symb << "  ";
                        l++;
                    }
                    i++;
                    cout << endl;
                }
                else {
                    cout << symb << "  ";
                    while (l < lenght - 2)
                    {
                        cout << "   ";
                        l++;
                    }
                    cout << symb << "   ";
                    cout << endl;

                    i++;
                }
            }
        }
              break;

        default: {
            cout << "некорректные данные, карапитек иди кушай банан(К Алексеям Дмитриевичам не относится)" << endl;
        }
               break;

        }
    }
          break;

    case 4: {
        int hight, begin, finish;

        cout << "введите высоту треугольника" << endl;
        cin >> hight;
        hight = check(hight);
        cout << "введите символ из которой будет состоять фигура" << endl << endl;
        cin >> symb;
        cout << "Выберите тип\n [1] Заполненный\n [2] Пустой" << endl << endl;
        cin >> choise;
        lenght = hight * 2 - 1;
        begin = hight;
        finish = hight;

        switch (choise)
        {
        case 1: {
            for (i = 0; i < hight; i++)
            {
                for (int j = 0; j <= lenght; j++) {
                    if (j < begin || j > finish) {

                        cout << " ";
                    }
                    else {
                        cout << symb;
                    }

                }
                begin--;
                finish++;
                cout << endl;
            }
        }
              break;
        case 2: {
            for (i = 0; i < hight; i++)
            {
                for (int j = 1; j <= lenght; j++) {
                    if (i == hight - 1) {
                        cout << symb;
                    }
                    else if (j == begin || j == finish) {
                        cout << symb;

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

        default: {
            cout << "некорректные данные, карапитек иди кушай банан(К Алексеям Дмитриевичам не относится)" << endl;
        }




        }



    }
          break;
    case 5: {
        cout << "введите длину ребра" << endl;
        cin >> lenght;
        lenght = check(lenght);
        if (lenght % 2 == 0) {
            lenght++;
        }
        cout << "введите символ из которой будет состоять фигура" << endl << endl;
        cin >> symb;

        while (i < lenght) {
            short l = 0;

            while (l < lenght) {

                if (l % 2 == 1 || i % 2 == 1) {
                    cout << symb << " ";

                }
                else {
                    cout << "  ";
                }
                l++;
            }
            i++;
            cout << endl;
        }



    }
          break;
    case 6: {
        cout << "введите ширину поля для диагонали" << endl;
        int lenght;
        cin >> lenght;
        lenght = check(lenght);
        cout << "введите символ из которой будет состоять фигура" << endl << endl;
        cin >> symb;
        int hight;
        hight = lenght;
        short begin = 0, finish = lenght;



        for (int i = 0; i <= hight; i++)
        {
            for (int l = 0; l <= lenght; l++)
            {
                if (l == begin || l == finish)
                {
                    cout << symb << " ";
                }

                else if (l != begin || l < finish)
                {
                    cout << "  ";
                }

            }
            cout << endl;
            begin++;
            finish--;
        }

    }
          break;
    case 7: {
        cout << "введите длину креста" << endl;
        cin >> lenght;
        lenght = check(lenght);
        if (lenght % 2 == 0) {
            lenght++;
        }
        int center;
        center = (lenght / 2);
        cout << "введите символ из которой будет состоять фигура" << endl << endl;
        cin >> symb;

        while (i < lenght) {
            short l = 0;

            while (l < lenght) {

                if (l == center || i == center) {
                    cout << symb << " ";

                }
                else {
                    cout << "  ";
                }
                l++;
            }
            i++;
            cout << endl;
        }

        break;
    }
    case 407: {
        cout << "введите размер" << endl;
        cin >> lenght;
        lenght = check(lenght);
        if (lenght % 2 == 0) {
            lenght++;
        }
        cout << "Введите символ" << endl;
        char symb;
        cin >> symb;
        int i = 0;
        int begin, finish;
        begin = 0;
        finish = lenght - 1;


        while (i < lenght) {
            int l = 0;

            while (l < lenght)
            {
                if ((l % 2 == 0) && (l > finish) || (l % 2 == 0) && (l < begin) || (i % 2 == 0) && (l >= begin) && (l <= finish) || i == lenght - 1 || l == lenght - 1 || l == 0 || i == 0) {
                    cout << symb << " ";

                }
                else {
                    cout << "  ";
                }
                l++;

            }
            i++;
            if (i <= lenght / 2 || l <= lenght / 2) {
                begin++;
                finish--;
            }
            else {
                begin--;
                finish++;
            }
            cout << endl;



        }


    }
            break;
    default: {
        system("cls");
        cout << "некорректные данные, карапитек иди кушай банан(К Алексеям Дмитриевичам не относится)" << endl;
        for (int i = 1; i <= menu; i++) {
            cout << i << "карапитек" << endl;
        }
        break;
    }


    }
    return 0;
}