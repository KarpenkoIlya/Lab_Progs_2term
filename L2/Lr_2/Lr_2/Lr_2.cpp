#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int m;
    float r, s1, s2, c, grad, pi, d, a, k;
    cout << " Start Menu\n 1)Ввести радиус круга\n 2)Вывети площадь круга\n 3)Вывод площади круга образованного сектором угла A\n 4)Вывод длины окружности\n";
    cout << " 5)Вывод стороны квадрата, описанного внутри окружности\n 6) Вывод объёма конуса, в основании круг, высота равна радиусу\n 7) Информация\n 8)Выход из программы\n";
    do {
        cin >> m;
        switch (m) {
        case (1):
            cin >> r;
            break;
        case (2):
            s1 = M_PI * pow(r, 2);
            cout << "Площадь круга: " << s1 << "\n";
            break;
        case (3):
            cout << "Введите угол A\n";
            cin >> grad;
            pi = grad / 360;
            s2 = s1 * pi;
            cout << s2 << "\n";
            break;
        case (4):
            d = 2 * M_PI * r;
            cout << d << "\n";
            break;
        case (5):
            a = (2 * r) / sqrt(2);
            cout << a << "\n";
            break;
        case (6):
            k = 1 / 3 * M_PI * pow(r, 3);
            cout << "Объема конуса, основанием которого служит круг, а высота которого равна введенному радиусу\n";
            break;
        case (7):
            cout << "Версия 2.2.8, Автор : ABOBUS\n";
            break;
        default:
            cout << "Выход из программы\n";
            break;
        }
    } while (m != 8);
    return 0;
}