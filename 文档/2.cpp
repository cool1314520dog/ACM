class Person {
public:
    Person() { }
    Person(int age, double weight) : age(age), weight(weight) { }

    void setAge(int age) { this->age = age; }
    int getAge() const { return this->age; }

    void setWeight(double weight) { this->weight = weight; }
    double getWeight() const { return this->weight; }

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

protected:
    int grade;
};
