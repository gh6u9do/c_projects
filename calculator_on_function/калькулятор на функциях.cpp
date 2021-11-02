#include <iostream>
#include <cmath>

using namespace std;

int calculater(int num1, int num2, char operation)
{
	if (operation == '+') {
		return num1 + num2;
	}
	else if (operation == '-') {
		return num1 - num2;
	}
	else if (operation == '*') {
		return num1 * num2;
	}
	else if (operation == '/') {
		return num1 / num2;
	}
	else if (operation == '/' && (num1 == 0 || num2 == 0)) {
		return 0;
	}
	else if (operation == '4') {
		
		if ((num1 + num2) % 2 == 0) {
			return 1;
		}
		else {
			return 0;
		}
	}
	else if (operation == '5') {
		int num3;
		num3 = pow(num1, num2);
		return num3;
	}
	else if (operation == '6') {
		int num3;
		num3 = num1 * num2 + 54;
		return num3;
	}
	else if (operation == '7') {
		int num3;
		num3 = (num1 + num2) / 2;
		return num3;	
	}
	else {
		cout << "вы допустили ошибку";
	}

	
}


int main()
{
	setlocale(0, "");

	cout << "введите первое число"<<endl;
	int num1;
	cin >> num1;

	cout << "введите второе число" << endl;
	int num2;
	cin >> num2;

	short choose;
	cout << "для справки по действиям введите 1, для продолжения программы введите 0" << endl;
	cin >> choose;
	if (choose == 1) {
		cout << "\"+\" - сложить, \"-\" - вычесть, \"*\" - умножить, \"/\" - разделить, \"4\" - проверить сумму на четность (1 - чет, 0 - нечет), \"5\" - возведение первого числа в степень n, \"6\" - умножение чисел + 54, \"7\" - сложение чисел и деление на 2 "<<endl;
	}


	cout << "введите знак действия" << endl;
	char operation;
	cin >> operation;

	int result = calculater(num1, num2, operation);
	cout << "результат = "<<result;

}

