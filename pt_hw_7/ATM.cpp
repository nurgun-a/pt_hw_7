#include "ATM.h"

void Handler5000::handle(int i)
{
    if (i < 5000)
    {
        cout << " - H 5000 passsed, " << i << " < 5000" << endl;
        Base::handle(i);
    }
    else
    {
        if (i % 5000 == 0)
        {
            cout << "Выдача " << i / 5000 << " шт. по 5000 руб." << endl;
        }
        else
        {
            cout << "Выдача " << i / 5000 << " шт. по 5000 руб." << endl;
            Base::handle(i % 5000);
        }
    }

}

void Handler2000::handle(int i)
{
    if (i < 2000)
    {
        cout << " - H 2000 passsed, " << i << " < 2000" << endl;
        Base::handle(i);
    }
    else
    {
        if (i % 2000 == 0)
        {
            cout << "Выдача " << i / 2000 << " шт. по 2000 руб." << endl;
        }
        else
        {
            cout << "Выдача " << i / 2000 << " шт. по 2000 руб." << endl;
            Base::handle(i % 2000);
        }
    }
}

void Handler1000::handle(int i)
{
    if (i < 1000)
    {
        cout << " - H 1000 passsed, " << i << " < 1000" << endl;
        Base::handle(i);
    }
    else
    {
        if (i % 1000 == 0)
        {
            cout << "Выдача " << i / 1000 << " шт. по 1000 руб." << endl;
        }
        else
        {
            cout << "Выдача " << i / 1000 << " шт. по 1000 руб." << endl;
            Base::handle(i % 1000);
        }
    }
}

void Handler500::handle(int i)
{
    if (i < 500)
    {
        cout << " - H 500 passsed, " << i << " < 500" << endl;
        Base::handle(i);
    }
    else
    {
        if (i % 500 == 0)
        {
            cout << "Выдача " << i / 500 << " шт. по 500 руб." << endl;
        }
        else
        {
            cout << "Выдача " << i / 500 << " шт. по 500 руб." << endl;
            Base::handle(i % 500);
        }
    }
}

void Handler200::handle(int i)
{
    if (i < 200)
    {
        cout << " - H 200 passsed, " << i << " < 200" << endl;
        Base::handle(i);
    }
    else
    {
        if (i % 200 == 0)
        {
            cout << "Выдача " << i / 200 << " шт. по 200 руб." << endl;
        }
        else
        {
            cout << "Выдача " << i / 200 << " шт. по 200 руб." << endl;
            Base::handle(i % 200);
        }
    }
}

void Handler100::handle(int i)
{
    if (i < 100)
    {
        cout << " - H 100 passsed, " << i << " < 100" << endl;
        Base::handle(i);
    }
    else
    {
        if (i % 100 == 0)
        {
            cout << "Выдача " << i / 100 << " шт. по 100 руб." << endl;
        }
        else
        {
            /* cout << "Выдача " << i / 100 << " купюр по 100 руб." << endl;
             Base::handle(i % 100);*/
            cout << "Ошибка, некорректный ввод" << endl;
        }
    }
}
