#include<iostream>
#include<fstream>
#include "stu.h"
#include "admin.h"

using namespace std;

void main() {
    int n;
    int flag;
    flag = 1;
    user *us;
    while(flag) {
        fflush(stdout);
        system("cls");
        cout << endl << "*************************" << endl;
        cout << "** 1.管理员界面" << "    "  <<  "2.学生考试" << "   "  << "3.退出  **" << endl;
        cin >> n;
        switch (n) {
            case 1:
                us = new damin();
                us->operate();
                break;
            case 2:
                us = new stu();
                us->operate();
                break;
            case 3:
                flag = 0;
                break;
            default:
                break;
        }
    }
}

