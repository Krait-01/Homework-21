#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double X, Y; double* px = &X; double* py = &Y;


    cout << "������ 1.\n"; // ������ 1
    cout << "������� �������� ���������� X:\nX = "; cin >> X;
    cout << "\n������� �������� ���������� Y:\nY = "; cin >> Y;
    cout << "\n��������� *px = " << *px << "\n\n";
    cout << "��������� *py = " << *py << "\n\n\n";


    cout << "������ 2.\n"; // ������ 2
    cout << "������� �������� ���������� X:\nX = "; cin >> X;
    cout << "\n������� �������� ���������� Y:\nY = "; cin >> Y;
    double res = (*px + *py) / 2;
    cout << "\n������� �������������� �������� ���������� 'X' � 'Y' = " << res << "\n\n";

    return 0;
}