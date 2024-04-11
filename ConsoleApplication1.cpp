#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "Введите 2 числа: ";
	cin >> a >> b;
	cout << "Сумма: "<< (a + b);
}
