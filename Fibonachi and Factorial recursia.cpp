//Вывод необходимого количества чисел Фибоначчи или конкретно заданого числа при помощи рекурсии
//Вывод факториала заданого числа или факториалов всех чисел до заданого при помощи рекурсии
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

int menu_vubory(void)
{
	int vubir;

	do
	{
		cout << "Что нужно зделать (введите 1, 2 или 3):" << '\n'
			<< "1) Вивести необходимое количество чисел Фибоначчи." << '\n'
			<< "2) Вивести факториал заданого числа." << '\n'
			<< "3) Выход. " << endl;

		cin >> vubir;

		if (cin.fail())   //смотрим чтобы введеное значение соотвецтвувало требованиям
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}//if (cin.fail())

		cin.clear();  //на случай если введено сперва целое число, а потом что-то еще (пример: 10 а, 10c, 12 2)
		cin.ignore(32767, '\n');

		system("cls");
	} while (!((vubir == 1) || (vubir == 2) || (vubir == 3)));

	return vubir;

}//int menu_vubory(void)

int odne_chu_vsi_znachenia(void)
{
	int vubir;

	do
	{
		cout << "Что нужно зделать (введите 1, 2, 3 или 4):" << '\n'
			<< "1) Вивести все значения до заданого числа." << '\n'
			<< "2) Вивести только значение введеного числа." << '\n'
			<< "3) Вернуться в предварительное меню." << '\n'
			<< "4) Выход. " << endl;

		cin >> vubir;

		if (cin.fail())   //смотрим чтобы введеное значение соотвецтвувало требованиям
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}//if (cin.fail())

		cin.clear();  //на случай если введено сперва целое число, а потом что-то еще (пример: 10 а, 10c, 12 2)
		cin.ignore(32767, '\n');

		system("cls");
	} while (!((vubir == 1) || (vubir == 2) || (vubir == 3) || (vubir == 4)));

	return vubir;

}//int odne_chu_vsi_znachenia(void)

void fibonacci_vsi_znachenia(void)
{
	int kilkist_znachen;

	do
	{
		cout << "Введите сколько нужно вивести чисел Фибоначчи:" << endl;

		cin >> kilkist_znachen;   //для вводу количества необходимых значений чисел Фибоначчи

		if (cin.fail())   //смотрим чтобы введеное значение соотвецтвувало требованиям
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}

		cin.clear();  //на случай если введено сперва целое число, а потом что-то еще (пример: 10 а, 10c, 12 2)
		cin.ignore(32767, '\n');

		system("cls");

	} while (kilkist_znachen <= 0);   //повторяем пока не введут значение больше нуля


	for (int i = 0; i < kilkist_znachen; i++)   //цыкл для вывода значений чисел Фибоначчи
	{
		cout << "Номер по счету: " << i + 1 << " = "
		     << fibonacci(i) << " (значение)" << endl;

	}//for (int i = 0; i < kilkist_znachen; i++)

}//void fibonacci_vsi_znachenia(int kilkist_znachen)

void fibonacci_odne_znachenia(void)
{
	int kilkist_znachen;

	do
	{
		cout << "Введите какого по счету числа Фибоначчи нужно вивести значение:" << endl;

		cin >> kilkist_znachen;   //для вводу количества необходимых значений чисел Фибоначчи

		if (cin.fail())   //смотрим чтобы введеное значение соотвецтвувало требованиям
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}

		cin.clear();  //на случай если введено сперва целое число, а потом что-то еще (пример: 10 а, 10c, 12 2)
		cin.ignore(32767, '\n');

		system("cls");

	} while (kilkist_znachen <= 0);   //повторяем пока не введут значение больше нуля

	cout << "Номер по счету: " << kilkist_znachen + 1 << " = "
		 << fibonacci(kilkist_znachen) << " (значение)" << endl;

}//void fibonacci_vsi_znachenia(int kilkist_znachen)

void factorial_vsi_znachenia(void)
{
	int chuslo_do_faktorialy;

	do
	{
		cout << "Введите число до которого нужно посчитать факториалы:" << endl;

		cin >> chuslo_do_faktorialy;   //для вводу количества необходимых значений чисел факториала

		if (cin.fail())   //смотрим чтобы введеное значение соотвецтвувало требованиям
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}//if (cin.fail())

		cin.clear();  //на случай если введено сперва целое число, а потом что-то еще (пример: 10 а, 10c, 12 2)
		cin.ignore(32767, '\n');

		system("cls");

	} while (chuslo_do_faktorialy < 0);   //повторяем пока не введут значение больше нуля

	for (int j = 0; j <= chuslo_do_faktorialy; j++)
	{
		cout << "Факториал числа: " << chuslo_do_faktorialy << " = "
			 << factorial(chuslo_do_faktorialy) << endl;   //заменить chuslo_do_faktorialy на j
	}//for (int j = 0; j <= chuslo_do_faktorialy; j++)

}//void factorial_vsi_znachenia(void)

void factorial_odne_znachenia(void)
{
	int chuslo_do_faktorialy;

	do
	{
		cout << "Введите факториал какого числа нужно посчитать:" << endl;

		cin >> chuslo_do_faktorialy;   //для вводу числа факториал которого нужно найти

		if (cin.fail())   //смотрим чтобы введеное значение соотвецтвувало требованиям
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}//if (cin.fail())

		cin.clear();  //на случай если введено сперва целое число, а потом что-то еще (пример: 10 а, 10c, 12 2)
		cin.ignore(32767, '\n');

		system("cls");

	} while (chuslo_do_faktorialy < 0);   //повторяем пока не введут значение больше нуля

										  //for (int j = 0; j <= chuslo_do_faktorialy; j++)   //розкоментовать если нужно показать факториалы всех чисел до заданого
	cout << "Факториал числа: " << chuslo_do_faktorialy << " = "
		<< factorial(chuslo_do_faktorialy) << endl;   //заменить chuslo_do_faktorialy на j

}//void factorial_odne_znachenia(void)

void pause_clear(void)
{
	system("pause");
	system("cls");
}


int main()
{
	setlocale(LC_ALL, "rus");   //для русской локализации консоли

	int vubir_menu;
	int vubir_dii;

	vubir_menu = menu_vubory();

	int kilkist_znachen;

	do
	{
		if (vubir_menu == 1)
		{
			vubir_dii = odne_chu_vsi_znachenia();

			if (vubir_dii == 1)
			{
				fibonacci_vsi_znachenia();
				pause_clear();
				vubir_menu = menu_vubory();
			}

			else if (vubir_dii == 2)
			{
				fibonacci_odne_znachenia();
				pause_clear();
				vubir_menu = menu_vubory();
			}

			else if (vubir_dii == 3)
				vubir_menu = menu_vubory();

			else if (vubir_dii == 4)
				return 0;
			
		}//if (vubir == 1)


		else if (vubir_menu == 2)
		{
			vubir_dii = odne_chu_vsi_znachenia();

			if (vubir_dii == 1)
			{
				factorial_vsi_znachenia();
				pause_clear();
				vubir_menu = menu_vubory();
			}

			else if (vubir_dii == 2)
			{
				factorial_odne_znachenia();
				pause_clear();
				vubir_menu = menu_vubory();
			}

			else if (vubir_dii == 3)
				vubir_menu = menu_vubory();

			else if (vubir_dii == 4)
				return 0;

		}//else if (vubir == 2)


		//cout << endl;
	} while (!(vubir_menu == 3));

	//system("pause");   //дополнительна задержка на случай если окно закрываеться после выполнения всех функций (нужно розкоментировать)

    return 0;

}//int main()

