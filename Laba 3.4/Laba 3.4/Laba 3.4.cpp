
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double R;
	cout << "x ="; cin >> x;
	cout << "y ="; cin >> y;
	cout << "R ="; cin >> R;

	//розгалуження в повній формі 
		if (x * x + y * y <= R * R && y >= x && x >= 0
			|| x * x + y * y <= R * R && y <= x && x <= 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}