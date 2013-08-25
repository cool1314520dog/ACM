#include <iostream>

using namespace std;

class Employee {
public:
    Employee(int age, int yearOfService, double salary) : age(age), yearOfService(yearOfService), salary(salary) {   }

	void setAge(int age);
	int getAge();

	void setYearOfService(int yearOfService);
	int getYearOfService();

	void setSalary(double salary);
	double getSalary();

    int getSalaryInThousands();

private:
	int age;
	int yearOfService;
	double salary;
};

void Employee::setAge(int age) {
	this->age = age;
}

int Employee::getAge() {
	return this->age;
}

void Employee::setYearOfService(int yearOfService) {
	this->yearOfService = yearOfService;
}

int Employee::getYearOfService() {
	return this->yearOfService;
}

void Employee::setSalary(double salary) {
	this->salary = salary;
}

double Employee::getSalary() {
	return this->salary;
}

int Employee::getSalaryInThousands() {
    return (this->salary + 500) / 1000;
}

int main() {
	Employee xiaoming(3, 1, 1000.00);
//	xiaoming.setAge(3);
//	xiaoming.setYearOfService(1);
//	xiaoming.setSalary(10000.00); 

	cout << "xiaoming" << endl;
	cout << "age: " << xiaoming.getAge() << endl;
	cout << "year of service: " << xiaoming.getYearOfService() << endl;
	cout << "salary: " << xiaoming.getSalaryInThousands() << endl;
	cout << endl;

	Employee wangnima(4, 2, 12500.00);
//	wangnima.setAge(4);
//	wangnima.setYearOfService(2);
//	wangnima.setSalary(12500.00);

	cout << "wangnima" << endl;
	cout << "age: " << wangnima.getAge() << endl;
	cout << "year of service: " << wangnima.getYearOfService() << endl;
	cout << "salary: " << wangnima.getSalaryInThousands() << endl;

	return 0;
}
