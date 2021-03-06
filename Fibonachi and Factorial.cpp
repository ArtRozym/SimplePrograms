//Вывод необходимого количества чисел Фибоначчи при помощи рекурсии
//Вывод факториала заданого числа (можна зделать вывод факториалов до заданого числа включительно)
#include "stdafx.h"
#include <iostream>

using namespace std;

int fibonacci(int number) //функция для обчисления чисел Фибоначчи
{
	if (number == 0)
		return 0;		

	if (number == 1)
		return 1;

	else
		return fibonacci(number - 1) + fibonacci(number - 2);
}

int factorial(int number)  //функция для обчисления факториала
{
	if (number < 1)
		return 1;

	else
		return factorial(number-1)*(number);
}

int main()
{
	setlocale(LC_ALL, "rus");   //для русской локализации консоли

	int vubir;

	do
	{
		cout << "Что нужно зделать (введите 1 или 2):" << '\n'
			<< "1) Вивести необходимое количество чисел Фибоначчи." << '\n'
			<< "2) Вивести факториал заданого числа." << endl;
		
		cin >> vubir;

		if (cin.fail())   //смотрим чтобы введеное значение соотвецтвувало требованиям
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}//if (cin.fail())

		cin.clear();  //на случай если введено сперва целое число а через пробел что-то еще (пример: 10 а)
		system("cls");
	} while (!((vubir == 1) || (vubir == 2)));


	int kilkist_znachen;

	if (vubir == 1)
	{
		do
		{
			cout << "Введите сколько нужно вивести чисел Фибоначчи:" << endl;

			cin >> kilkist_znachen;   //для вводу количества необходимых значений чисел Фибоначчи

			if (cin.fail())   //смотрим чтобы введеное значение соотвецтвувало требованиям
			{
				cin.clear();
				cin.ignore(32767, '\n');
			}

			cin.clear();  //на случай если введено сперва целое число а том что-то еще (пример: 10 а, 10c)

			system("cls");

		} while (kilkist_znachen <= 0);   //повторяем пока не введут значение больше нуля


		for (int i = 0; i < kilkist_znachen; i++)   //цыкл для вывода значений чисел Фибоначчи
		{
			cout << "Номер по счету: " << i << " = ";
			cout << fibonacci(i) << " (значение)" << endl;

		}//for (int i = 0; i < kilkist_znachen; i++)

	}//if (vubir == 1)


	else if (vubir == 2)
	{
		int chuslo_do_faktorialy;

		do
		{
			cout << "Введите факториал  какого числа нужно посчитать:" << endl;

			cin >> chuslo_do_faktorialy;   //для вводу количества необходимых значений чисел Фибоначчи

			if (cin.fail())   //смотрим чтобы введеное значение соотвецтвувало требованиям
			{
				cin.clear();
				cin.ignore(32767, '\n');
			}//if (cin.fail())

			cin.clear();  //на случай если введено сперва целое число а через пробел что-то еще (пример: 10 а)

			system("cls");

		} while (chuslo_do_faktorialy < 0);   //повторяем пока не введут значение больше нуля

		//for (int j = 0; j <= chuslo_do_faktorialy; j++)   //розкоментовать если нужно показать факториалы всех чисел до заданого
			cout << "Факториал числа: " << chuslo_do_faktorialy << " = " 
				 << factorial(chuslo_do_faktorialy)<<endl;   //заменить chuslo_do_faktorialy на j

	}//else if (vubir == 2)

	cout << endl;

	//system("pause");

    return 0;

}//int main()

