#include <iostream>
using namespace std;


int Add(int a, int b, int c = 0);	//�������� ������� (���������� ������� - Function Declaration)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "������� ��� �����: "; cin >> a >> b;
	cout << a << " + " << b << " = " << Add(a, b, 10) << endl; // ������������� ������� (����� ������� - Function call)
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
}
int Add(int a, int b, int c)	//���������� ������� (����������� ������� - Function definition)
{
	//Addition - ��������
	c+= a + b;
	return (double)c;
}

int Sub(int a, int b)
{
	//Subtraction - ���������
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