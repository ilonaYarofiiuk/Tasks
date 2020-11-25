#include <iostream>
#include <cmath>

using namespace std;

// Задача нв проверку на кратность
/*
int main()
{
	int N;
	cin >> N;
	if (N % 5 == 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	system("pause");
	return 0;
}
*/

/*
int main() {
	double x, y;
	cout << "Input x:";
	cin >> x;
	cout << "Input y:";
	cin >> y;
	if (x >= -1 && x <= 1 && y >= -1 && y <= 1)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	system("pause");
	return 0;
}
*/

/*
int main() {
	double x, y, R1, R2;
	cout << "Input x:";
	cin >> x;
	cout << "Input y:";
	cin >> y;
	cout << "Input R1:";
	cin >> R1;
	cout << "Input R2:";
	cin >> R2;
	if ((x * x + y * y <= R1 * R1) && (x * x + y * y >= R2 * R2))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	system("pause");
	return 0;
	
}
*/


int main() {
	double x, y;
	cout << "Input x:";
	cin >> x;
	cout << "Input y:";
	cin >> y;
	if ((x <= x + 1 && x >= x -1) &&
		(y <= y + 1 && y >= -y - 1))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	system("pause");
	return 0;
}


/*
int main() {
	double x, y, z;
	cout << "Input x:";
	cin >> x;
	cout << "Input y:";
	cin >> y;
	if (x < y) {
		if (x > y)
			z = x;
		else
			z = y;
		cout << "x < 0, Xmax =" << z << endl;
	}
	else {
		 if (x < y)
			 z = x;
		else 
			z = y;
		 cout << "x > 0, Xmin =" << z << endl;
	}

	system("pause");
	return 0;
}
*/

/*
int main() {
    
	for (int i = 0; i < 100; i++) {
		cout << "i = " << i << endl;
	}
	system("pause");
	return 0;
}
*/