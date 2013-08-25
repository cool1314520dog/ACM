#ifndef _ADMIN_H
#define _ADMIN_H
#include "user.h"

class admin: public user {
public:
    virtual void operate();
private:
    void print_stu();
    void add_stu();
    void add_problem();
};

