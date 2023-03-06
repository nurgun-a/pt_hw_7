#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <vector>
#include <fstream>
#include <assert.h>
#include <ctime>

using namespace std;

class Base
{
    Base* next;
public:
    Base()
    {
        next = 0;
    }
    void setNext(Base* n)
    {
        next = n;
    }
    void add(Base* n)
    {
        if (next)
            next->add(n);
        else
            next = n;
    }
    virtual void handle(int i)
    {
        next->handle(i);
    }
};

class Handler5000 : public Base
{
public:
    void handle(int i)
    {
        if (i<5000)
        {
            cout << " - H 5000 passsed, " << i << " < 5000"<<endl;
            Base::handle(i);
        }
        else
        {
            if (i%5000==0)
            {
                cout << "Выдача " << i/5000 << " купюр по 5000 руб."<<endl;
            }
            else
            {
                cout << "Выдача " << i / 5000 << " купюр по 5000 руб." << endl;
                Base::handle(i%5000);
            }
        }
            
    }
};

class Handler2000 : public Base
{
public:
    void handle(int i)
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
                cout << "Выдача " << i / 2000 << " купюр по 2000 руб." << endl;
            }
            else
            {
                cout << "Выдача " << i / 2000 << " купюр по 2000 руб." << endl;
                Base::handle(i % 2000);
            }
        }
    }
};

class Handler1000 : public Base
{
public:
    void handle(int i)
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
                cout << "Выдача " << i / 1000 << " купюр по 1000 руб." << endl;
            }
            else
            {
                cout << "Выдача " << i / 1000 << " купюр по 1000 руб." << endl;
                Base::handle(i % 1000);
            }
        }
    }
};

class Handler500 : public Base
{
public:
    void handle(int i)
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
                cout << "Выдача " << i / 500 << " купюр по 500 руб." << endl;
            }
            else
            {
                cout << "Выдача " << i / 500 << " купюр по 500 руб." << endl;
                Base::handle(i % 500);
            }
        }
    }
};

class Handler200 : public Base
{
public:
    void handle(int i)
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
                cout << "Выдача " << i / 200 << " купюр по 200 руб." << endl;
            }
            else
            {
                cout << "Выдача " << i / 200 << " купюр по 200 руб." << endl;
                Base::handle(i % 200);
            }
        }
    }
};

class Handler100 : public Base
{
public:
    void handle(int i)
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
                cout << "Выдача " << i / 100 << " купюр по 100 руб." << endl;
            }
            else
            {
               /* cout << "Выдача " << i / 100 << " купюр по 100 руб." << endl;
                Base::handle(i % 100);*/
                cout << "Ошибка, некорректный ввод" << endl;
            }
        }
    }
};