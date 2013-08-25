#include<iostream>
#include<cmath>

using namespace std;

class Shape {
public:
    Shape(double x, double y) {
        this->x = x;
        this->y = y;
    }

    virtual double area() const {
        return 0.0;
    }

protected:
    double x;
    double y;
};

class Circle : public Shape {
public:
    Circle(double x, double y, double r) : Shape(x, y)
    {
        this->r = r;
    }

    virtual double area() const {
        return 3.14 * r * r;
    }
protected:
    double r;
};

class Rectangle : public Shape {
public:
    Rectangle(double x, double y, double x2, double y2) : Shape(x, y)
    {
        this->x2 = x2;
        this->y2 = y2;
    }

    double area() const {
        return abs((x-x2) * (y-y2));
    }
protected:
    double x2;
    double y2;
};

int main()
{
    Circle c(2, 5, 4);
    Rectangle re(2, 4, 1, 2);
    cout << c.area() << endl;
    cout << re.area() << endl;
}
    
