#include "test_op.h"
#include<time.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

void test_op::rang_test() {
    int n[PROBLEM_NUM] = {0};
    srand((unsigned)time(NULL));
    for(int i=0; i < PROBLEM_NUM; i++) {
        random:
        n[i] = rand() % p[0].max_id + 1;
        for(int j=0; j<i; j++) {
            if(n[i] == n[i-j-1])
                goto random;
        }
        p[i].find_by_id(n[i]);
    }
}

int test_op::create_test() {
    string type[3]= {"(判断)","(单选)","(多选)"};
    string answer;
    int score = 0;
    rand_test();

    for(int i=1; i<=3; i++) {
        for(int j=0; j< PROBLEM_NUM; j++) {
            if(p[j].q_type==1) {
                system("cls");
                fflush(stdout);
                cout << endl << type[i-1] << p[j].question << "(答案以逗号隔开)" << endl;
                cin >> answer;
                if(answer == p[j].answer) {
                    score = score + 100/PROBLEM_NUM;
                }
            }
        }
    }
    return score;
}

