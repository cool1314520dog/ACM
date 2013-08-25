#include<iostream>
using namespace std;
class Employee
{
    private:
        int age;
        int yearOfService;
        float Salary;
    public:
        void setage(int a)
        {
            age=a;
        }
        void setSalary(float s)
        {
            Salary=s;
        }
        void setyearOfService(int y)
        {
            yearOfService=y;
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
        int changesalary(float s)
        {
            return Salary=(int)(s+500)/1000.0;
        }
};
int main()
{
    Employee e1,e2;
    e1.setage(20);
    e2.setage(21);
    cout<<"e1.age="<<e1.getage()<<endl;
    cout<<"e2.age="<<e2.getage()<<endl;
    e1.setSalary(5000.56);
    e2.setSalary(6000);
    cout<<"e1.salary="<<e1.getsalary()<<endl;
    cout<<"e2.salary="<<e2.getsalary()<<endl;
    cout<<"e1.changesalary="<<e1.changesalary(5600.78)<<endl;
    e1.setyearOfService(2);
    e2.setyearOfService(3);
    cout<<"e1.yearOfService="<<e1.getyearOfService()<<endl;
    cout<<"e2.yearOfService="<<e2.getyearOfService()<<endl;
    return 0;
}
