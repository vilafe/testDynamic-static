// testDynamic.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Header.h"
extern "C" __declspec(dllimport) int MyGroup(int);
extern "C" __declspec(dllimport) void Myname(char*);

int main()
{
    std::cout << "My group is " << MyGroup(571227) << "\n";
    char name[50];
    MyName(name);
    std::cout << "My name is " << name << "\n";
    system("pause");
    return 0;
}

