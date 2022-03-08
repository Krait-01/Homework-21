#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double X, Y; double* px = &X; double* py = &Y;


    cout << "Задача 1.\n"; // Задача 1
    cout << "Введите значение переменной X:\nX = "; cin >> X;
    cout << "\nВведите значение переменной Y:\nY = "; cin >> Y;
    cout << "\nУказатель *px = " << *px << "\n\n";
    cout << "Указатель *py = " << *py << "\n\n\n";


    cout << "Задача 2.\n"; // Задача 2
    cout << "Введите значение переменной X:\nX = "; cin >> X;
    cout << "\nВведите значение переменной Y:\nY = "; cin >> Y;
    double res = (*px + *py) / 2;
    cout << "\nСреднее арифметическое значение переменных 'X' и 'Y' = " << res << "\n\n";

    return 0;
}