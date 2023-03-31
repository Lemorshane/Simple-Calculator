#include <iostream>
using std::cout;
using std::cin;
int main()
{
	setlocale(LC_ALL, "rus");
	char op;
	double num1;
	double num2;
	double result;
	cout << "-------КАЛЬКУЛЯТОР-------\n";
	cout << "Введите числа и функцию ( + - * /) по примеру:\n 123 * 123 :\n";
	cin >> num1 >> op >> num2;
	switch (op) {
	case '+':
		result = num1 + num2;
		cout << " = " << result << "\n";
		break;
	case '-':
		result = num1 - num2;
		cout << " = " << result << "\n";
		break;
	case '*':
		result = num1 * num2;
		cout << " = " << result << "\n";
		break;
	case '/':
		result = num1 / num2;
		cout << " = " << result << "\n";
		break;
	}
	cout << "-------------------------";

}

