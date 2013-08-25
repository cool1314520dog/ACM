#include<iostream>
using namespace std;
class Employee
{
    private:
        int age;
        int yearOfService;
        float Salary;
    public:
        void setage()
        {
            age=22;
        }
        void setSalary()
        {
            Salary=6000;
        }
        void setyearOfService()
        {
            yearOfService=3;
        }
        int getage()
        {
            return age;
        }
        int getyearOfService()
        {
            return yearOfService;
        }
        float getsalary()
        {
            return Salary;
        }
};
int main()
{
    Employee e1,e2;
    e1.setage();
    e2.setage();
    cout<<"e1.age="<<e1.getage()<<endl;
    cout<<"e2.age="<<e2.getage()<<endl;
    e1.setSalary();
    e2.setSalary();
    cout<<"e1.salary="<<e1.getsalary()<<endl;
    cout<<"e2.salary="<<e2.getsalary()<<endl;
    e1.setyearOfService();
    e2.setyearOfService();
    cout<<"e1.yearOfService="<<e1.getyearOfService()<<endl;
    cout<<"e2.yearOfService="<<e2.getyearOfService()<<endl;
    return 0;
}
