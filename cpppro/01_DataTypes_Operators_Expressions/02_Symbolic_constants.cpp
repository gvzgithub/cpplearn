// Created by GVZ.
#include "iostream"
#include "windows.h"
using namespace std;
#define FAT_BMI 28
#define J2C_RATE 4.19  // Joule-to-calorie ratio
// Symbolic constants: #define Name (identifier) Constant value,
//symbolic constants are defined in the header of the code.
// Definition of symbolic constants without semicolon ending

// Way 1: Introducing the windows.h library
// Mode 2: system(“chcp 65001”).
int main()
{
   // system("chcp 65001");
    SetConsoleOutputCP(CP_UTF8);
    // Statements that use symbolic constants are just normal code to be written in the main function
    // How to use it: To use a symbolic constant, just use its name.
    cout << FAT_BMI << endl;
    cout << "焦耳转卡路里需要除以：" << J2C_RATE << endl;
    return 0;
}