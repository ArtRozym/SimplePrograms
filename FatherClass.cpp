#include "pch.h"  //не потрібний файл і можна його підклячення просто стерти
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // для std::sort

class FatherClass_SpaceObject
{
public:
	// конструктор по умолчанию
	FatherClass_SpaceObject()
	{
		_name = "";
		_size = 0.0;
	}

	// конструктор с параметрами
	FatherClass_SpaceObject(std::string name, double size)
	{
		_name = name;
		_size = size;
	}

	//ф-я ввода данных с клавиатуры
	void fatherInput()
	{
		std::cout << "\nВведiть назву космiчного об'єктa (стрiчка): ";
		std::getline(std::cin, _name);
		std::cout << "\nВведiть величину космiчного об'єктa (цiле число): ";
		std::cin >> _size;
		
	}

	//ф-я вывода данных на екран
	void pfatherPint()
	{
		std::cout << "\nHазвa космiчного об'єктa: " << _name
			<< "\nBеличинa космiчного об'єктa: " << _size;
			
	}

	// деструктор
	~FatherClass_SpaceObject()
	{

	}

	//для вывода конкретного параметра (доступ к конкретному полю)
	std::string getName() const { return _name; }
	double getSize() const { return _size; }
	
private:
	 std::string _name;
	 int _size;
};


class DaughterClass_Planet : public FatherClass_SpaceObject
{
public:
	// конструктор по умолчанию
	DaughterClass_Planet()
	{
		_galaxy = "";
		_mass = 0.0;
	}

	// конструктор с параметрами
	DaughterClass_Planet(std::string galaxy, double mass)
	{
		_galaxy = galaxy;
		_mass = mass;
	}

	//ф-я ввода данных с клавиатуры
	void input()
	{
		FatherClass_SpaceObject :: fatherInput();
		std::cout << "\nВведiть назву галактики планети (стрiчка): ";
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		std::getline(std::cin, _galaxy);
		std::cout << "\nВведiть масу планети (цiле число): ";
		
		std::cin >> _mass;

	}

	//ф-я вывода данных на екран
	void print()
	{
		pfatherPint();
		std::cout << "\nHазвa галактики планети: " << _galaxy
			<< "\nМаса планети: " << _mass;

	}

	// деструктор
	~DaughterClass_Planet()
	{

	}

	//для вывода конкретного параметра (доступ к конкретному полю)
	std::string getGalaxy() const { return _galaxy; }
	double getMass() const { return _mass; }

private:
	std::string _galaxy;
	int _mass;

};

int main()
{
	setlocale(LC_ALL, "rus");

	char addClass = 't'; //змінна перевірки чи будемо додавати новий елемент

	std::vector< DaughterClass_Planet> vecDaughterClass_Planet;
	DaughterClass_Planet Planet;

	do
	{
		Planet.input();
		vecDaughterClass_Planet.push_back(Planet);

		std::cout << "\nЯкщо потрiбно додати новий елемент натиснiть t, якщо нi тодi f\n";
		
		std::cin >> addClass;
		std::cin.clear();
		std::cin.ignore(32767, '\n');

	} while (addClass == 't');

	for (int i = 0; i < vecDaughterClass_Planet.size()-1; i++)
	{
		for (int j = 0; j < vecDaughterClass_Planet.size()-1; j++)
		{
			if (vecDaughterClass_Planet[j].getSize() > vecDaughterClass_Planet[j + 1].getSize())
				std::swap (vecDaughterClass_Planet[j], vecDaughterClass_Planet[j + 1]);
		}
	}

	std::cout << "\n Вивiд вiдбувається вiд об'єктiв з найменшою величиною до об'єктiв з найбiльшою величиною\n";
	for (int i = 0; i < vecDaughterClass_Planet.size(); i++)
	{
		std::cout << std::endl;
		vecDaughterClass_Planet[i].print();
		
	}
	system("pause");
	return 0;
}
