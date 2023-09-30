#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите два числа:";
		cin >> a >> b;
	c = a + b;
	cout <<"Сумма чисел:"<< c;
	return 0;


}
