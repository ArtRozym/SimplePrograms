#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "vvedit n= " << endl;
	cin >> n;

	int *masuv = new int[n];
	
	int chus = 0;
	int znam = 1;

	for (int i = 0; i < n; i++)
	{
		masuv[i] = i + 1;
		znam *= masuv[i];
	}

	for (int i = 0; i < n; i++)
		chus += (znam / masuv[i]);

	bool ne_skorotnui_drib = true;
	while (ne_skorotnui_drib)
	{
		if ((znam % 2 == 0) && (chus % 2 == 0))
		{
			chus /= 2;
			znam /= 2;
			ne_skorotnui_drib = true;
		}

		else if ((znam % 3 == 0) && (chus % 3 == 0))
		{
			chus /= 3;
			znam /= 3;
			ne_skorotnui_drib = true;
		}

		else if ((znam % 5 == 0) && (chus % 5 == 0))
		{
			chus /= 5;
			znam /= 5;
			ne_skorotnui_drib = true;
		}

		else if ((znam % 7 == 0) && (chus % 7 == 0))
		{
			chus /= 7;
			znam /= 7;
			ne_skorotnui_drib = true;
		}

		else if (chus%znam==0)
		{
			chus /= znam;
			znam /= znam;
			ne_skorotnui_drib = true;
		}

		else
			ne_skorotnui_drib = false;
	}

	cout << "chus/znam = " << chus << "/" << znam << endl;

	delete[] masuv;
	system("pause");
	return 0;
}

