#include <iostream>
#include <windows.h>

using namespace std;

int a = 0;
int Perimetr = 0;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "������� ������� ��������: ";
    cin >> a;

    Perimetr = a+a+a+a;

    cout << "�������� �������� ����� " << Perimetr << ".\n";

    cout << "��� ������ ������� <Enter>.. ";
    fflush(stdin);
    cin.get();
    return 0;
}
