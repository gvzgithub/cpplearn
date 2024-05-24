//
// Created by GVZ on 2024/5/24.
//
#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    //short,int,long,long long
    short age = 21;
    cout << age << endl;

    int num1 = 1;
    long num2 = 2;
    long long num3 = 3;
    cout << num1 << num2 << num3 << endl;

    //sizeof,look bytes
    cout << "short占用字节：" << sizeof (age) << endl;
    cout << "int占用字节：" << sizeof (num1) << endl;
    cout << "long占用字节：" << sizeof (num2) << endl;
    cout << "long long占用字节：" << sizeof (num3) << endl;

    return 0;
}
