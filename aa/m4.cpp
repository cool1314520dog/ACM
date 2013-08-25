#ifndef _FILEC_H
#define _FILEC_H
#include<string>
using namespace std;

class file_op {
    public:
        file_op(string file_name);
        bool read_file();
        void write_file(string str);
        void back_to_beg();
        void update_file(string old_details, string new_details);
        string details;
     private:
        stream off_set;
        string file_path;
};
#endif

