#include"stu.h"
#include<iostream>
#include<string>
#include "user_op.h"
#include"test_op.h"

using namespace std;

void stu::operate() {
    string username, passwd;
    int score;
    char tmp;
    user_op so;
    teat_op to;
    fflush(stdout);
    system("cls");
    cout << endl << "请输入用户名（输入b回退上级目录）：";
    cin >> username;
    cout << "请输入密码：";
    cin >> passwd;
    cout << "开始考试，按回车键继续" << endl;
    tmp = getchar();
    tmp = getchar();
    if(!so.check_user(username, passwd))
        return ;
    score = to.create_test();
    so.update_user(username, score);
    fflush(stdout);
    system("cls");
    cout << endl << "考试结束，您的分数为：" << score << endl;
    cout << "按回车键退出" << endl;
    tmp = getchar();
    tmp = getchar();
}
