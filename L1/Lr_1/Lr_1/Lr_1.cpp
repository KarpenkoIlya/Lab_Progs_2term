#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, n, s;
Mark:
	n = 0;
	cout << "Введите сумму s: ";
	cin >> s;
	if (s > 7) {
		if (s % 5 == 0) {
			s = s / 5;
			cout << "Сумму можно отдать пятёрками в количестве " << s << "\n";
		}
		else if (s % 3 == 0) {
			s = s / 3;
			cout << "Сумму можно отдать тройками в количестве " << s << "\n";
		}
		else {
			while (s != 0) {
				s = s - 3;
				n++;
				if (s % 5 == 0) {
					s = s / 5;
					cout << "Число троек: " << n << " число пятёрок: " << s;
					s = 0;
				}

			}
		}
	}
	else {
		cout << " Введите число соответсвующее условию";
		goto Mark;
	}
	return 0;
}
