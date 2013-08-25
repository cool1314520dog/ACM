#include<iostream>

using namespace std;

class Base {
public:
    virtual void fn() {
        cout << "In Base class\n";
    }
};

class Sub : public Base {
public:
    virtual void fn() {
        cout << "In Sub class\n";
    }
};

int main()
{
    Base bc;
    Sub sc;
    bc.fn();
    sc.fn();
}
//只有在加上virtual的成员函数，才被编译做滞后处理，滞后的间接效应，解决了重要的多态问题，使得用户可以与以前基于对象的编程保持一致，进行抽象编程了。


