// Lab_03_4.cpp
// < Шкринда Володимир
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком

// Варіант 22
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double R, xp, xk, dx, F, y,x;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -8)
			y = -R;
		else
			if (-8 < x && x <= -R)
				y = (-((R * (R + x)) / (R - 8)));
			else
				if (-R < x && x <= R)
					y = -sqrt(pow(R, 2) - pow(x, 2));
				else
					if (R < x && x <= 5)
						y = (2 * (x - R)) / (5 - R);
					else
						y = 3;
		cout << "|" << setw(7) << setprecision(2) << y

			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	x = xp;
	do {
		if (x <= -8)
			y = -R;
		else
			if (-8 < x && x <= -R)
				y = (-((R * (R + x)) / (R - 8)));
			else
				if (-R < x && x <= R)
					y = -sqrt(pow(R, 2) - pow(x, 2));
				else
					if (R < x && x <= 5)
						y = (2 * (x - R)) / (5 - R);
					else
						y = 3;
		cout << "|" << setw(7) << setprecision(2) << y

			<< " |" << endl;
		x += dx;
	} while (x <= xk);
	cout << "---------------------------" << endl;
	for (x = xp; x <= xk; x += dx)
	{
		if (x <= -8)
			y = -R;
		else
			if (-8 < x && x <= -R)
				y = (-((R * (R + x)) / (R - 8)));
			else
				if (-R < x && x <= R)
					y = -sqrt(pow(R, 2) - pow(x, 2));
				else
					if (R < x && x <= 5)
						y = (2 * (x - R)) / (5 - R);
					else
						y = 3;
		cout << "|" << setw(7) << setprecision(2) << y

			<< " |" << endl;

	}
	return 0;
	cin.get();
}
