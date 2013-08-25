class Animal {
public:
    Animal() {  }
    Animal(double weight, int age) : age(age), weight(weight) { }

    void display() {
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
private:
    double weight;
    int age;
};





