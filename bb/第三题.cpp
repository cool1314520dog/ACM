#include<iostream>
using namespace std;

class Person {
public:
    Person();
    Person(int age, float weight);
    virtual void sayHello();
private:
    int age;
    float weight;
};

Person::Person()
{

}

Person::Person(int age, float weight)
{
    this->age=age;
    this->weight=weight;
}

void Person::sayHello()
{
    cout << "你好！" << endl;
}

class Student:public Person {
public:
    Student(int age, float weight, float grate):Person(age, weight) {
        this->grate=grate;
    }
    virtual void sayHello();
private:
    float grate;
};

void Student::sayHello()
{
    cout << "你好我也好，大家好才是真的好！" << endl;
}

int main()
{
    Person *a;
    Student b(20, 50.0, 100);
    a=&b;
    a->sayHello();
    return 0;
}
