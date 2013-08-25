#include <iostream>

using namespace std;

class Person {
public:
    Person() { }
    Person(int age, double weight) : age(age), weight(weight) { }

    void setAge(int age) { this->age = age; }
    int getAge() const { return this->age; }

    void setWeight(double weight) { this->weight = weight; }
    double getWeight() const { return this->weight; }

    virtual void sayHello() const {
        cout << "你好！" << endl;
    }

protected:
    int age;
    double weight;
};

class Student : public Person {
public:
    Student() { }
    Student(int age, double weight, int grade) : Person(age, weight), grade(grade) { }

    void setGrade(int grade) { this->grade = grade; }
    int getGrade() const { return this->grade; }

    virtual void sayHello() const {
        cout << "你好我也好，大家好才是真的好！" << endl;
    }

protected:
    int grade;
};

int main() {
    Person* person = new Student(16, 140.0, 9);

    person->sayHello();

    return 0;
}
