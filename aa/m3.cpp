#include<fstream>
#include<iostream>
#include"filec.h"

using namespace std;

file_op::file_op(string file_name) {
    file_path = file_name;
    off_set = 0;
    details = "";
}

void file_op::back_to_beg() {
    off_set = 0;
}

bool file_op::read_file() {
    fstream f;
    f.open(file_path.c_str(), ios::in);
    if(f.bad()) {
        cout << "read_file -- file open err" << endl;
        return false;
    }
    f.seekg(off_set, ios::cur);
    do {
        f >> detalis;
    } while (details == "" && !f.eof());

    off_set = f.tellg();
    if(off_set != -1) {
        f.close();
        return true;
    }

    f.close();
    return false;
}

void file_op::write_file(string str) {
    fstream f;
    f.open(file_path.c_str(), ios::app|iios::out);
    f << str;
    f.close();
}

void file_op::update_file(string old_details, string new_details) {
    fstream f, tmp;
    f.open(file_path.c_str(), ios::in);
    tmp.open("tmp", ios::app|ios::out);
    while (!f.eof()) {
        f >> details;
        if(details == "")
            continue;
        if(details !=old_details) {
            tmp << new_details << endl;
        }
        else
        {
            tmp << new_details << endl;
        }
    }
    f.close();
    tmp.close();
    remove(file_path.c_str());
}

