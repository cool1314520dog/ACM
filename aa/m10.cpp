#include "filec.h"
#include "user_op.h"
#include <sstream>
#include <iostream>

using namespace std;

user_op::user_op() {
    delete fo;
}

bool user_op::read_user() {
    string ::
