#include <iostream>
using namespace std;

int main() {
	int operation;
	cout << "Enter number of task: ";
	cin >> operation;
	switch (operation)
	{
	case 1: {
		int lenght, height;
		char symbol;
		symbol = getchar();
		cout << "Enter lenght: ";
		cin >> lenght;
		cout << "Enter height: ";
		cin >> height;
		cout << "Enter symbol: ";
		cin >> symbol;


		for (size_t i = 0; i < height; i++)
		{
			for (size_t j = 0; j < lenght; j++)
			{
				cout << symbol;
			}
			cout << endl;
		}
	}break;
	case 2: {
		char n;
		int a = 0, b = 0, i = 0, j = 0, y = 0, e = 0;
		cout << "Enter symbol" << endl;cin >> n;
		cout << "Enter lenght" << endl;cin >> a;
		cout << "Enter height" << endl;cin >> b;
		for (i = 1;i <= a;i++) { cout << n; }cout << endl;
		for (j = 1;j <= (b - 2);j++) { cout << n;for (y = 1;y <= (a - 2);y++) { cout << " "; }cout << n << endl; }
		for (e = 1;e <= a;e++) { cout << n; }cout << endl;
	}
	default:
		break;
	}
}