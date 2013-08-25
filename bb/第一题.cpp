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
    this->age = age;
    this->weight = weight;
}


