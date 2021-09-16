#include <iostream>
using namespace std;
int check(int, char);
int main()
{
    setlocale(LC_ALL, "Russian");
    char s[100];
    int d;
    cout << "Для завершения текста написать .\n";
    cin.getline(s, 100, '.');
    for (int i = 0; i < 100; i++) {
        for (int n = 1; n < i; n++) {
            if (s[i] == s[i - n]) goto Mark;
        }
        cout << s[i];
        Mark: continue;
    }
    return 0;
}