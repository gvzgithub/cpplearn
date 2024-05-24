//
// Created by GVZ on 2024/5/24.
//
#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    signed int num1 = 10; //signed
    int num2 = -10; //signed too
    cout << num1 << "," << num2 << endl;

    unsigned int num3 = 666; //unsigned,must bigger than 0
    cout << num3 << endl;

    unsigned long num4 = 100;

    //quick way is u_...
    u_short num5 = 114;
    u_int num6 = 514;
    u_long num7 = 1919;
    cout << num6 << num5 << num7 << endl;

    return 0;
}
