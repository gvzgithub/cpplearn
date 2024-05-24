//
// Created by GVZ on 2024/5/24.
//
#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int yue;
    yue = 50;
    cout << "小明余额"<< yue << endl;
    yue = yue - 5;
    cout << "买奶茶花了5元，还剩" << yue << endl;
    yue = yue + 10;
    cout << "转卖奶茶得10元，有" << yue << endl;
    yue = yue - 2;
    cout << "花两元买了彩票，还剩"  << yue << endl;
    yue = yue * 2;
    cout << "中奖了！余额翻倍，有" << yue << endl;

}