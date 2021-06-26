// C++ program to illustrate the ilogb()
// function when input is a double value
#include <cfloat>
#include <cmath>
#include <iostream>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	int result, x = 11.11;

	result = ilogb(x);
	cout << "ilogb (" << x << ") = " << result << endl;

	x = 41.11;
	result = ilogb(x);
	cout << "ilogb (" << x << ") = " << result << endl;

	_getch();
	return 0;
}