#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c, d;
	cout << "Введите дни, часы, минуты, секунды:";
	cin >> a >> b >> c >> d;
	int e=( a*60*60*24)+(b*60*60)+(c*60)+d;
	cout <<"Всего в секундах:"<< e;
	return 0;
}
