class Person {
public:
    Person() { }
    Person(int age, double weight) : age(age), weight(weight) { }

    void setAge(int age) { this->age = age; }
    int getAge() const { return this->age; }

    void setWeight(double weight) { this->weight = weight; }
    double getWeight() const { return this->weight; }

private:
    int age;
    double weight;
};
