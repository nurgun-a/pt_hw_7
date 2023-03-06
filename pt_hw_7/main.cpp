#include "ATM.h"

void main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    Handler5000 root;
    Handler2000 two;
    Handler1000 thr;
    Handler500 four;
    Handler200 five;
    Handler100 six;

    root.add(&two);
    root.add(&thr);
    root.add(&four);
    root.add(&five);
    root.add(&six);

    int num = 0;

    do
    {
        system("cls");
        cout << "Введите сумму для выдачи: "; cin >> num; cout << endl;

        if (num % 100 != 0)
        {
            cout << "Некорректный ввод!!!" << endl;
            system("pause");
        }
        else
        {
            root.handle(num);
            system("pause");
        }
    } while (true);

   

       
}