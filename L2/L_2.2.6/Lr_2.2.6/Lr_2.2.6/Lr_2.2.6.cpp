#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    double x = 0.0, e, summary = 0.0, d = 0.0;
    cout << "Введите x и d: \n";
    cin >> x >> d;
    double sinus = sin(x), rs = 1 + d;
    e = x;
    for (int i = 1; rs > d; i++)
    {
        summary += e;
        e *= (-1) * x * x / (2 * i) / (2 * i + 1);
        rs = abs(sinus - summary);
    }
    cout << "X = " << x << "\n";
    cout << "sin(x) = " << x << "\n";
    cout << summary << "\n";
    return 0;
}