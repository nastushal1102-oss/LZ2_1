#include <iostream>
#include <cmath>       // Для sin, cos, log (натуральний логарифм)
#include <windows.h>   // Для кирилиці

using namespace std;

int main() {
    // Налаштування української мови
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y;

    cout << "Введіть значення x: ";
    cin >> x;

    // Перевірка умови
    if (x <= 0) {
        // Якщо x менше або дорівнює 0: y = sin(cos(x))
        y = sin(cos(x));
        cout << "Використано формулу: y = sin(cos(x))" << endl;
    }
    else {
        // Якщо x більше 0: y = cos(ln(x))
        // У C++ натуральний логарифм ln(x) — це функція log(x)
        y = cos(log(x));
        cout << "Використано формулу: y = cos(ln(x))" << endl;
    }

    cout << "Результат y = " << y << endl;

    return 0;
}