#ifndef _PROBLEM_H
#define _PROBLEM_H
#include<string>
uisng namespace std;

class problemn {
    public:
        int q_id;
        int q_type;
        string question;
        string answer;
        int max_id;
        problem();
        void add_problem(int type, string q, string a);
        bool find_by_id(int id);
}
#endif
