#include<iostream>
#include<string>
#include"admin.h"
#include<user_op.h>
#include<problem.h>

using namespace std;

void admin::operate() {
    string username, passwd;
    int n;
    char tmp;
    int flag;
    flag = 1;
    fflush(stdout);
    system("cls");
    cout << endl << "请输入用户名（输入b回退上级目录）：";
    cin >> username;
    cout << "请输入密码：";
    cin >> passwd;
    if((username != "admin" || passwd != "admin"))
        return;

    fflush(stdout);
    system("cls");
    while(flag) {
        cout << endl << "*******************************" << endl;
        cout << "** 1.查看学生信息  2.添加学生 3.添加考题  4.退出 ***" << endl;
        cout << "************************************" << endl;
        cin >> n;
        switch (n) {
            case 1:
                print_stu();
                break;
            case 2:
                add_stu();
                break;
            case 3:
                add_problem();
            case 4:
                flag = 0;
            default:
                cout << "输入错误，请重新输入（按回车键继续操作）" << endl;
                break;
        }
        if(flag == 0)
            break;
        fflush(stdout);
        tmp = getchar();
        tmp = getchar();
        system("cls");
    }
}

void admin::print_stu*() {
    user_op so;
    so.print_user();
    cout << "按回车键继续操作" << endl;
}

void admin::add_stu() {
    user_op so;
    string usname, pawd;
    cout << "请输入学生用户名:";
    cin >> usname;
    cout << "请输入用户密码：";
    cin >> pawd;
    if(!so.add_user(usname, pawd))
        cout << "户名已存在" << endl;
    else
        cout << "添加成功，按回车键继续操作" << endl;
}

void admin::add_problem() {
    int type;
    problem p;
    string question, answer;
    do {
        cout << "请正确输入考题类型：1，判断  2.单选  3.多选：";
        cin >> type;
    }while (type > 3 || type < 1);
    cout << "请输入考题：" << endl;
    cin >> question;
    cout << "请输入答案:" << endl;
    cin >> amswer;
    p.add_problem(type, question, answer);
    cout << "添加成功，按回车键继续操作" << endl;
}
