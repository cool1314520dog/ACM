#include "problem.h"
#include "filec.h"
#include<string>
#include <sstream>
#include<iostream>

using namespace std;

problem::problem() {
    string::size_type cur_off_set, next_off_set;
    stringstream s;
    q_id = 0;
    q_type = 0;
    question = "";
    answer = "";
    file_op fo("problem.txt");
    while (fo.read_file()) {
        cur_off_set = 0;
        next_off_set = (fo.details).find("|", cur_off_set);
        s << (f0.details).substr(cur_off_set, nex_off-cur_off_set);
        s >> max_id;
        s.clear();
        s.st("");
    }
}
bool problem::find_by_id(int id) {
    string::size_type cur_off_set, nex_off_set;
    stringstream s;
    file_op fo("problem.txt");
    if (id > max_id)
        return false;
    while (fo.read_file()) {
        cur_off_set = 0;
        nex_off_set = (f0.details).find("|", cur_off_set);
        s << (fo.details).substr(cur_off_set, next_off_set-cur_off_set);
        s >> q_id;
        s.clear();
        s.str("");
        if(q_id == id) {
            cur_off_set = nex_off_set + 1;
            nex_off_set = (fo.details).find("|", cur_off_set);
            s << (fo.details).substr(cur_off_set, nex_off_set-cur_off_set);
            s >> q_type;
            cur_off_set=nex_off_set+1;
            nex_off_set = (fo.details).find("|",cur_off_set);
            question = (fo.details).substr(cur_off_set, next_off_set-cur_off_set);
            cur_off_set=next_off_set + 1;
            nex_off_sex = (fo.details).find("\n", cur_off_set);
            answer = (f0.details).substr(cur_off_set, next_off_set-cur_off_set);
            return true;
        }
    }
    return false;
}
void problem::add_problem(int type, string a) {
    file_op fo("problem.txt");
    ostringstream os;
    max_id ++;
    os << max_id << "|" << type << "|" << q << "|" << a << endl;
    fo.write_file(os.str());
}
