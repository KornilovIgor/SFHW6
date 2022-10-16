#include "Camera.h"
#include "Player.h"
#include "ManicureMachine.h"
#include "WeldingMachine.h"
#include "СordlessDrill.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

	IElectronics* electronics[5];

    electronics[0] = new Camera(5, 10);
    electronics[1] = new Player(4, 20);
    electronics[2] = new ManicureMachine(15, 15000);
    electronics[3] = new WeldingMachine(20, 1600);
    electronics[4] = new СordlessDrill(5, 10);

    bool open = true;
    while (open)
    {
        cout << "Выберите товар :\n1 - камера\n2 - плеер\n3 - маникюрный аппарат\n4 - сварочный аппарат\n5 - аккумуляторная дрель\n\n0 - чтобы выйти\n\nВыбор: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            electronics[0]->ShowSpec();
            system("pause");
            system("cls");
            break;

        case 2:
            electronics[1]->ShowSpec();
            system("pause");
            system("cls");
            break;

        case 3:
            electronics[2]->ShowSpec();
            system("pause");
            system("cls");
            break;

        case 4:
            electronics[3]->ShowSpec();
            system("pause");
            system("cls");
            break;

        case 5:
            electronics[4]->ShowSpec();
            system("pause");
            system("cls");
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Выберите товар от 1 до 5 или 0, чтобы выйти" << endl;
            break;
        }
    }

    delete electronics[0];
    delete electronics[1];
    delete electronics[2];
    delete electronics[3];
    delete electronics[4];




	return 0;
}