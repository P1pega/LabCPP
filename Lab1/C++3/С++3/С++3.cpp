#include <iostream>
using namespace std;
	int function(int a)
	{
		return a * 4;
	}
	int main (){
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите число галонов:";
	cin >> a;
	cout << "В литрах это:", cout << function(a);
	}


