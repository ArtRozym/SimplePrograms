#include "pch.h"
#include <iostream>

using namespace std;

// a/b + c/d = (a*d + c*b)/b*d  
// c=const=1,  d->n,  a,b = zminni
//(a*d + c*b)= chus,  b*d=znam

void neskorot_drib(int &a, int &b, int c, int d, int &chus, int &znam)
{
	chus = (a * d + c * b);
	znam = (b * d);
	a = chus;
	b = znam;
}

int main()
{
	cout << "vvedit N\n";
	int n;
	cin >> n;

	int a = 1, b = 1, c = 1, d = 1;
	int chus = 0, znam = 1;

	for (int i = 2; i <= n; i++)
	{
		neskorot_drib(a, b, c, i, chus, znam);
		
	}

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

		else if (chus%znam == 0)
		{
			chus /= znam;
			znam /= znam;
			ne_skorotnui_drib = true;
		}

		else
			ne_skorotnui_drib = false;
	}

	cout << "\nchys/znam = " << chus << "/" << znam << endl;

	system("pause");
	return 0;
}
