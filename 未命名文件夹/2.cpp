class Employee {
public:
	void setAge(int age);
	int getAge();

	void setYearOfService(int yearOfService);
	int getYearOfService();

	void setSalary(double salary);
	double getSalary();

private:
	int age;
	int yearOfService;
	double salary;
};