#include <iostream>
#include <windows.h>

using namespace std;

int a = 0;
int Perimetr = 0;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введите сторону квадрата: ";
    cin >> a;

    Perimetr = a+a+a+a;

    cout << "Периметр квадрата равен " << Perimetr << ".\n";

    cout << "Для выхода нажмите <Enter>.. ";
    fflush(stdin);
    cin.get();
    return 0;
}
