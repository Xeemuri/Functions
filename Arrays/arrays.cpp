#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int after_comma = 2, int minRand = 0, int maxRand = 100);
void FillRand(int arr[][COLS], const int ROWS,const int COLS);
void FillRand(double arr[][COLS], const int ROWS,const int COLS, int after_comma = 2, int minRand=0, int maxRand=100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(int arr[][COLS], const int ROWS, const int COLS);
void Sort(double arr[][COLS], const int ROWS, const int COLS);


int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(int arr[][COLS], const int ROWS, const int COLS);
double Sum(double arr[][COLS], const int ROWS, const int COLS);


double Avarage(int arr[], const int n);
double Avarage(double arr[], const int n);
double Avarage(int arr[][COLS], const int ROWS, const int COLS);
double Avarage(double arr[][COLS], const int ROWS, const int COLS);


int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
int minValueIn(int arr[][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[][COLS], const int ROWS, const int COLS);


int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
int maxValueIn(int arr[][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[][COLS], const int ROWS, const int COLS);


void main()
{
	setlocale(LC_ALL, "");

	cout << "Одномерный целочисленный массив: \n";
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	cout << "Отсортированный массив: " << endl;
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое массива: " << Avarage(arr, n)<<endl;
	cout << "Минимальное значение массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(arr, n) << endl<<endl<<endl;


	cout << "Одномерный вещественный массив: \n";
	int after_comma = 2;
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE,after_comma);
	Print(d_arr, D_SIZE);
	Sort(d_arr, D_SIZE);
	cout << "Отсортированный массив: " << endl;
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее арифметическое массива: " << Avarage(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение массива: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(d_arr, D_SIZE) << endl << endl<<endl;
	

	cout << "Двумерный целочисленный массив: \n";
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	cout << "Отсортированный массив: " << endl;
	Print(i_arr_2, ROWS,COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое массива: " << Avarage(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(i_arr_2, ROWS, COLS) << endl << endl<<endl;
	

	cout << "Двумерный вещественный массив: \n";
	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS,after_comma);
	Print(d_arr_2, ROWS, COLS);
	Sort(d_arr_2, ROWS, COLS);
	cout << "Отсортированный массив: " << endl;
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое массива: " << Avarage(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(d_arr_2, ROWS, COLS) << endl << endl<<endl;
}


void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void FillRand(double arr[], const int n, int after_comma, int minRand, int maxRand)
{
	for (int  i = 0; i < after_comma; i++)
	{
		minRand *= 10;
		maxRand *= 10;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		for (int j = 0; j < after_comma; j++)
		{
			arr[i] /= 10;
		}
	}
}

void FillRand(int arr[][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(double arr[][COLS], const int ROWS, const int COLS, int after_comma, int minRand, int maxRand)
{
	for (int i = 0; i < after_comma; i++)
	{
		minRand *= 10;
		maxRand *= 10;
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
			for (int k = 0; k < after_comma; k++)
			{
				arr[i][j] /= 10;
			}
		}
	}
}


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << endl;
}

void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << endl;
}

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}


void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(int arr[][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

void Sort(double arr[][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						double buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}


int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int Sum(int arr[][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Sum(double arr[][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}


double Avarage(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avarage(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avarage(int arr[][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS*COLS);
}

double Avarage(double arr[][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS*COLS);
}


int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr[0])
		{
			min = arr[i];
		}
	}
	return min;
}

double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr[0])
		{
			min = arr[i];
		}
	}
	return min;
}

int minValueIn(int arr[][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i] < arr[0])
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}

double minValueIn(double arr[][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i] < arr[0])
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}


int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr[0])	
		{
			max = arr[i];
		}
	}
	return max;
}

double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr[0])
		{
			max = arr[i];
		}
	}
	return max;
}

int maxValueIn(int arr[][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i] > arr[0])
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}

double maxValueIn(double arr[][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i] > arr[0])
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}