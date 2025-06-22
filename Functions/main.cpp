#include <iostream>
using namespace std;


int Add(int a, int b, int c = 0);	//Прототип функции (Объявление функции - Function Declaration)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

unsigned long long Factorial(int a)
{
	int b = a;
	for (int i = 1; i < a; i++)
	{
		b *= i;
	}
	return b;
}

double Power(double num, int power)
{
	double N = 1;

	if (power < 0)
	{
		num = 1 / num;
		power = -power;
	}
	for (int i = 0; i < power; i++)
	{
		if (power < 0)
		{
			N /= num;
		}
		else
		{
			N *= num;
		}
		
	}
	return N;
}
void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	//cout << "Введите два числа: "; cin >> a >> b;
	//cout << a << " + " << b << " = " << Add(a, b, 10) << endl; // использование функции (вызов функции - Function call)
	//cout << a << " - " << b << " = " << Sub(a, b) << endl;
	//cout << a << " * " << b << " = " << Mul(a, b) << endl;
	//cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << "Введите число: "; cin >> a;
	cout << "Факториал числа " << a << " = " << Factorial(a) << endl;
	cout << "Введите число и степень: "; cin >> a >> b;
	cout << a << " в степени " << b << " = " << Power(a, b) << endl;
}
int Add(int a, int b, int c)	//Реализация функции (Определение функции - Function definition)
{
	//Addition - сложение
	c+= a + b;
	return (double)c;
}

int Sub(int a, int b)
{
	//Subtraction - вычитание
	return (double)a - b;
}
int Mul(int a, int b)
{
	return (double)a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}