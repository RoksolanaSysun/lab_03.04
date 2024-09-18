#include <iostream>
using namespace std;
int main()
{
	double R1;
	double R2;
	double x; // вхідний аргумент
	double y; // вхідний параметр


	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	// розгалуження в повній формі
	if ((x <= 0 && y >= 0 && x * x + y * y <= R2 * R2) || 
		(x >= 0 && y <= 0 && x * x + y * y <= R1 * R1 && x * x + y * y >= R2 * R2))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
		cin.get();
		return 0;
}
