class Person {
public:
    Person();
    Person(int age, float weight);
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

class Student:public Person {
public:
    Student(int age, float weight, float grate):Person(age, weight) {
        this->grate=grate;
    }
private:
    float weight;
};

