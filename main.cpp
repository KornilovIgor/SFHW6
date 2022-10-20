#include "Camera.h"
#include "Player.h"
#include "ManicureMachine.h"
#include "WeldingMachine.h"
#include "�ordlessDrill.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    const int electronicsCount = 5;

	IElectronics* electronics[electronicsCount];

    electronics[0] = new Camera(5, 10);
    electronics[1] = new Player(4, 20);
    electronics[2] = new ManicureMachine(15, 15000);
    electronics[3] = new WeldingMachine(20, 1600);
    electronics[4] = new �ordlessDrill(5, 10);

    bool open = true;
    while (open)
    {
        cout << "�������� ����� :" << std::endl 
            << "1 - ������" << std::endl 
            << "2 - �����" << std::endl
            << "3 - ���������� �������" << std::endl
            << "4 - ��������� �������" << std::endl
            << "5 - �������������� �����" << std::endl 
            << std::endl
            << "0 - ����� �����" << std::endl
            << std::endl
            << "�����: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            electronics[0]->showSpec();
            system("pause");
            system("cls");
            break;

        case 2:
            electronics[1]->showSpec();
            system("pause");
            system("cls");
            break;

        case 3:
            electronics[2]->showSpec();
            system("pause");
            system("cls");
            break;

        case 4:
            electronics[3]->showSpec();
            system("pause");
            system("cls");
            break;

        case 5:
            electronics[4]->showSpec();
            system("pause");
            system("cls");
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "�������� ����� �� 1 �� 5 ��� 0, ����� �����" << endl;
            break;
        }
    }

    for (int i = 0; i < electronicsCount; ++i)
    {
        delete electronics[i];
    }

	return 0;
}

/*
? 0. ��� �������� ������� �� �������� �� ����������� �������� 
    delete ��� ������� �������. ���������� ������� delete 
    ��� ����� �������, ����� delete ������������� ������� 
    ����������� ��� ������� ������� � �������.
V 1. � ������������ ������ �� ������������� ������������ using, �.�. ��� ����� �������� � �������� ����.
? 2. �������������� ������ �� ������ ����� �������.
*/