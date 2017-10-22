#include <iostream>
using namespace std;

void main(void)
{
	int firstNumber, secondNumber;
	char mathOprt;
	double result = 0;

	cout << "Enter first number for calculate" << endl;
	cin >> firstNumber;
	cout << "Enter math operations for calculate" << endl;
	cin >> mathOprt;
	cout << "Enter second number for calculate" << endl;
	cin >> secondNumber;

	if (mathOprt == 'x' || mathOprt == 'X')
	{
		mathOprt = '*';
	}

	switch (mathOprt)
	{
	case '+':
		result = firstNumber + secondNumber;
		break;

	case '-':
		result = firstNumber - secondNumber;
		break;

	case '*':
		result = firstNumber * secondNumber;
		break;

	case '/':
		result = firstNumber / secondNumber;
		break;

	default:
		printf("Invalid operaterator");
	}

	cout << "Result is: " << result << endl;

}