#include "pch.h"
#include <iostream>

using namespace std;

//ф-я для введення к-ті елементів
int inputN()
{
	while(true) // Цикл продолжается до тех пор, пока пользователь не введет корректное значение
	{
		int n = 0;
		cout << "Введите количество елементов:\n";
		
		cin >> n;

		if ((n <= 0) ||((n%2)!=0)|| cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else
			return n;
	}
}

double inputA()
{
	while (true) // Цикл продолжается до тех пор, пока пользователь не введет корректное значение
	{
		double n = 0;
		cin >> n;
		cout << endl;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else
			return n;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	int n=inputN();

	double *arrayA = new double[n];
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Введите елемент a[" << i << "]= ";
		arrayA[i] = inputA();
		cout << endl;
	}

	cout << endl << "Матрица имеет вид:" << endl;
	for (int i = 2; i < n+2; i++)
	{
		if ((i % 2) == 0)
		{
			for (int j = 0; j < n; j++)
				cout << arrayA[j] << " ";
			cout << endl;
		}
		else
		{
			for (int j = n-1; j >= 0; j--)
				cout << arrayA[j] << " ";
			cout << endl;
		}

	}

	cout << endl;
	system("pause");
	delete[]arrayA;
	return 0;
}

