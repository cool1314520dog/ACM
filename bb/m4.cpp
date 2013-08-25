#include<iostream>

using namespace std;

class Base {
public:
    virtual Base* afn() {
        cout << "In Base class\n";
        return this;
    }
};

class Sub : public Base {
public:
    Sub* afn() {
        cout << "In Sub class\n";
        return this;
    }
};

int main()
{
    Base b;
    Sub s;
    b.afn();
    s.afn();
}
//派生类和基类的成员函数都返回自己对象的指针，类型不同，则对象指针也不同，但其仍属于函数覆盖，具有虚函数的作用
