//
// Created by GVZ on 2024/5/24.
//
#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int bmi;
    bmi = 30;
    cout << "小明的BMI为：" << bmi << endl;

    bmi = 26;
    cout << "一个月后小明现在的BMI为：" << bmi << endl;

    //math:+,-,*,/
    bmi = bmi - 2;
    cout << "又一个月后，小明的BMI减了2，小明现在的BMI为：" << bmi << endl;


    return 0;
}