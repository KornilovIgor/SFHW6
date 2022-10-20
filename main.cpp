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

    const int electronicsCount = 5;

	IElectronics* electronics[electronicsCount];

    electronics[0] = new Camera(5, 10);
    electronics[1] = new Player(4, 20);
    electronics[2] = new ManicureMachine(15, 15000);
    electronics[3] = new WeldingMachine(20, 1600);
    electronics[4] = new СordlessDrill(5, 10);

    bool open = true;
    while (open)
    {
        cout << "Выберите товар :" << std::endl 
            << "1 - камера" << std::endl 
            << "2 - плеер" << std::endl
            << "3 - маникюрный аппарат" << std::endl
            << "4 - сварочный аппарат" << std::endl
            << "5 - аккумуляторная дрель" << std::endl 
            << std::endl
            << "0 - чтобы выйти" << std::endl
            << std::endl
            << "Выбор: ";
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
            cout << "Выберите товар от 1 до 5 или 0, чтобы выйти" << endl;
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
? 0. Для удаления массива из объектов не обязательно вызывать 
    delete для каждого объекта. Достаточно вызвать delete 
    для всего массива, далее delete автоматически вызовет 
    деструктуры для каждого объекта в массиве.
V 1. В заголовочных файлах не рекомендуется использовать using, т.к. это может привести к коллизии имен.
? 2. Неиспользуемые хедеры из файлов нужно удалять.
*/