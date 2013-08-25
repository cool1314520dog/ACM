#include<iostream>

using namespace std;

class Animal {
public:
    Animal() {  }
    Animal(double weight, int age) : age(age), weight(weight) { }

    virtual void display() {
        cout << "animal : weight = " << weight << "kg, " << "age = " << age <<endl;
    }

    void setWeight(double weight) {
        this->weight = weight;
    }
    double getWeight() const {
        return this->weight;
    }

    void setAge(int age) {
        this->age = age;
    }
    int getAge() const {
        return this->age;
    }
protected:
    double weight;
    int age;
};

class Bird : virtual public Animal {
public:
    Bird(double weight, int age, double flyDistance) : Animal(weight, age), flyDistance(flyDistance) {  }

    virtual void display() {
        cout << "Bird : weight = " << weight << ", age = " << age << ", flyDistance = " << flyDistance << endl;
    }

    void setFlyDistance(double flyDistance) {
        this->flyDistance = flyDistance;
    }
    double setDistance() const {
        return this->flyDistance;
    }
protected:
    double flyDistance;
};

class Horse : virtual public Animal {
public:
    Horse(double weight, int age, double runDistance) : Animal(weight, age),runDistance(runDistance) { }
    Horse() { }

    virtual void display() {
        cout << "Horse : weight = " << weight << " ,age=" << age << ", runDistance = " << runDistance << endl;
    }

    void setRunDistance(double runDistance) {
        this->runDistance = runDistance;
    }
    double getRunDistance() const {
        return this->runDistance;
    }
protected:
    double runDistance;
};

class Pegasus : public Bird, public Horse {
public:
    Pegasus(double weight, int age, double flyDistance, double runDistance) : Animal(weight, age), Bird(weight, age,flyDistance), Horse(weight, age, runDistance) { }

    virtual void display() {
        cout << "Pegasus : weight = " << weight << "kg, age = " << age << ", runDistance = " << runDistance << ", flyDistance = " << flyDistance << endl;
    }
};

int main()
{
    Animal *a1, *a2, *a3;
    Bird b(4, 8, 100);
    Horse h(50, 34, 78);
    Pegasus p(34, 56, 78, 45);
    a1 = &b;
    a2 = &h;
    a3 = &p;
    a1->display();
    a2->display();
    a3->display();
    return 0;
}




    
