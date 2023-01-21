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
	}
	default:
		break;
	}
}