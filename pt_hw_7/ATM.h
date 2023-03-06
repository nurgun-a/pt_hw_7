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
    void handle(int i);
};

class Handler2000 : public Base
{
public:
    void handle(int i); 
};

class Handler1000 : public Base
{
public:
    void handle(int i); 
};

class Handler500 : public Base
{
public:
    void handle(int i);
};

class Handler200 : public Base
{
public:
    void handle(int i);
};

class Handler100 : public Base
{
public:
    void handle(int i);   
};