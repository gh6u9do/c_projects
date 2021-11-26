#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

short countlive = 54;            // дефолтное количество жизней
short qtyquest = 15;             // дефолтное количество вопросов
short qtyhelp=10;                // дефолтное количество подсказок
string questions[15][5]{ {"Сколько годiн?","10","9","ой не чуэ баба","скiлько?"},
                         {"Сколько мне лет?", "54","18","7","12"},
                         {"Когда у меня день рождения?", "сегодня","завтра","вчера","30 февраля"},
                         {"Где Даня Шалагинов?", "у Суриной", "у Сидельникова", "у Орлова","у папы"},
                         {"Чего надо, Саш? Надо ... замерять", "двери", "окна","стены", "потолки"},
                         {"з..парк  зао/зоо?", "зоо","зао","какой-то парк..","чел ты.."},
                         {"самые милые животные?", "котики", "кролики","собачки","хомячки"},
                         {"как зовут папу?", "Николай", "Алексей", "Александр", "Борис"},
                         {"чем я питаюсь?", "питса", "рамен", "роллы", "пельмени"}, 
                         {"байкеры - они кака яйца, сначала крутые а потом...", "в смятку", "а потом?", "а потом крашеные на пасху?","да"},
                         {"автор мема МегаЛадонкин", "Дмитрий Демьяновский", "мы", "Дмитрий Штанько", "Денис?"},
                         {"из какого клана Саске ? ", "учиха", "абчихба", "ахпхапа какой клан его же вырезали..", "удзумаки"},
                         {"ало,это штаб?", "нет, это квартира", "да, это штаб", "ты куда звонишь, сынок?", "это михал палыч?"},
                         {"записали?", "нет, я запомнил", "да, я записал", "каво?", "повтори iще раз"}, 
                         {"проникают в квартиру с использованием голивудского эффекта ...", "человек-невидимка", "человек-муравей", "мне вызывать врачей, да?", "я вызываю"} };
int history[15]{};              // массив для хранения истории выведенных вопросов 
int historyanswer[4]{};          // массив для хранения истории 
short rquest;               // переменная для хранения номера рандомного вопроса
int random_quest = 0;                    
int random_ans = 0;              
short points = 0;                // переменная для кол-ва очков
short motion = 0;                   // считает ходы
short playeransw = 0;




int checkrand() {
    srand(time(0));
    
    

        for (int i = 0; i < qtyquest; i++) {
            
            if (countlive == 0) {
                return 0;
            }

            system("cls");
            //проверка на уникальность зарандомленного вопроса
            while (random_quest == history[0] || random_quest == history[1] || random_quest == history[2] || random_quest == history[3] || random_quest == history[4] || random_quest == history[5] || random_quest == history[6] || random_quest == history[7] || random_quest == history[8] || random_quest == history[9] || random_quest == history[10] || random_quest == history[11] || random_quest == history[12] || random_quest == history[13] || random_quest == history[14]) {
                random_quest = rand() % 15;
                random_quest++;
            }

            history[i] = random_quest;          

            cout <<"[" <<i + 1 <<"]" <<"  " << questions[random_quest-1][0] << endl<<endl;
            for (int l = 0; l < 4; l++) {//чистка массива с вопросами
            historyanswer[l] = 0;
            }
            for (int j = 0; j < 4; j++) {
            
                while (random_ans == historyanswer[0] || random_ans == historyanswer[1] || random_ans == historyanswer[2] || random_ans == historyanswer[3]) {
                    random_ans = rand() % 4;
                    random_ans++;
                }

                historyanswer[j] = random_ans;

                cout << j+1<<")" << questions[random_quest-1][random_ans] << endl<<endl;
            }

            if (qtyhelp > 0) {
                cout << "5) подсказка" << endl;
            }

            cin >> playeransw;

            //проверка на корректность числа, который ввел пользователь 
            while (((playeransw < 1 || playeransw > 4) && qtyhelp == 0) || ((playeransw < 1 || playeransw > 5) && qtyhelp > 0)) {
                cout << "вы ввели некорректное значение, повторi iщэ раз" << endl;
                cin >> playeransw;
            }

            if (questions[random_quest - 1][1] == questions[random_quest - 1][historyanswer[playeransw-1]]) {

                cout << "u god damn right" << endl;
                points++;
                motion++;
                Sleep(1000);
            }

            else if (playeransw == 5) {                         //отображение подсказки 
                system("cls");
                random_ans = (rand() % 3)+2;
                cout << i + 1 << "  " << questions[random_quest - 1][0] << endl << endl;
                cout <<"1 "<< questions[random_quest - 1][1] << endl;
                cout << random_ans <<" "<<questions[random_quest - 1][random_ans] << endl;
                qtyhelp--;
                cin >> playeransw;
                while (playeransw != 1 && playeransw != random_ans) {
                    cout << "введи нормальную цифру" << endl;
                    cin >> playeransw;
                }

                if (playeransw == 1) {
                    cout << "u god damn right" << endl;
                    points++;
                    Sleep(1000);
                    motion++;
                }
                else {
                    countlive--;
                    cout << "ты попал в просак" << endl;
                    cout << "у вас осталось: " << countlive << " жизней" << endl;
                    Sleep(1000);
                    motion++;
                }
            }
            else  {

                countlive--;
                motion++;
                cout << "у вас осталось: " << countlive << " жизней"<< endl;
                cout << "ты попал в просак" << endl;
                Sleep(1000);
            
            }

            cout << endl;

          
            if (motion == qtyquest) {
                 cout << "вы набрали: " << points << " очков"<<endl;
                 return 0;
            }
        } 
}            // функция рандомит массив и проверяет на повторения


void game() {

    srand(time(0));
    checkrand();  
}


void setting() {
    cout << "что вы хотите настроить?" << endl<<endl;
    cout << "[1] - Количество жизней"<<endl;
    cout << "[2] - Количество вопросов" << endl;
    cout << "[3] - Подсказки" << endl;
    cout << "[4] - Выйти" << endl;
    short choose = 0;

    cin >> choose;
    
    switch (choose) {                             // выбор пункта настроек
        case 1: {            // жизни
            system("cls");

            cout << "[1] - 1 жизнь"<<endl;
            cout << "[2] - 5 жизней" << endl;
            cout << "[3] - 54 жизни" << endl;

            short menu1 = 0;

            cin >> menu1;

            while (menu1 != 1 && menu1 != 2 && menu1 != 3) {
                cout << "некорректное значение" << endl;
                cin >> menu1;
            }

            if (menu1 == 1) {
                countlive = 1;
            }
            else if (menu1 == 2) {
                countlive = 5;
            }
            else if (menu1 == 3) {
                countlive = 54;
            }
            
        }
              break;

        case 2: {                     // вопросы
            system("cls");

            cout << "[1] - 15 вопросов"<<endl;
            cout << "[2] - 10 вопросов"<<endl;
            cout << "[3] - 5 вопросов" << endl;
            short menu1;
            cin >> menu1;

            while (menu1 != 1 && menu1 != 2 && menu1 != 3) {
                cout << "некорректное значение" << endl;
                cin >> menu1;
            }

            if (menu1 == 1) {
                qtyquest = 15;
            }
            else if (menu1 == 2) {
                qtyquest = 10;
            }
            else if (menu1 == 3) {
                qtyquest = 5;
            }
        }
              break;

        case 3: {               // подсказки
            system("cls");

            cout << "[1] - 10 подсказок" << endl;
            cout << "[2] - 5 подсказок" << endl;
            cout << "[3] - 1 подсказка" << endl;

            short menu1;
            cin >> menu1;

            if (menu1 == 1) {
                qtyhelp = 10;
            }
            else if (menu1 == 2) {
                qtyhelp = 5;
            }
            else if (menu1 == 3) {
                qtyhelp = 1;
            }
        }
              break;

    }

}


int main()
{
    setlocale(0, "");

    while (true) {
        system("cls");
        cout << "это программа FakeTaxi на канале ТнвэнТВ" << endl;
        cout << endl;

        short menu = 0;

        cout << "[1] - Играть" << endl;
        cout << "[2] - Настройки" << endl;
        cout << "[3] - Правила" << endl;
        cout << "[4] - Выйти" << endl;

        menu = 0;
        cin >> menu;

        switch (menu) {
            case 1: {
                system("cls");
                game();
                return 0;
            }
                  break;

            case 2: {
                system("cls");
                setting();
            }
                  break;

            case 3: {
                system("cls");

            }
                  break;

            case 4: {
                return 0;
            }
                  break;

            default: {
                return 0;
            }
        }


    }
}
