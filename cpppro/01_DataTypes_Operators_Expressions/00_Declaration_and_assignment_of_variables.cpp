//
// Created by GVZ on 2024/5/21.
//
#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int age; //declaration
    float height;
    char gender;
    string name;

    age = 21; //assignment
    height = 180.5;
    gender = 'm';
    name = "小明";

    //cout << "age = "<< age << endl; //use variables
    cout << name << "的年纪："<< age << endl;
    cout << name << "的性别："<< gender << endl;
    cout << name << "的身高："<< height << endl;

    return 0;
}