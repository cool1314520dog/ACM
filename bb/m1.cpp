#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

class Advisor {
    int noOfMeeting;
};

class Student {
public:
    Student(string pName) {
        this->pName = pName;
        hours = 0;
        average = 0;
    }

    void addCourse(double hours, double average) {
        this->hours = hours;
        this->average = average;
    }

    void display() {
        cout << "pName = " << pName << "\t" << "hours = " << hours << "\t" << "average = " << average << endl;
    }
private:
    string pName;
    double hours;
    double average;
};

class GraduateStudent : public Student {
public:
    GraduateStudent(string pName):Student(pName) { 
        qualifierGrade = 0;
    }

    int getQualifier() {
        return qualifierGrade;
    }

    void display() {
        Student::display();
        cout << " qualifierGrade = " <<qualifierGrade << endl;
    }

private:
    Advisor advisor;
    int qualifierGrade;
};

void fn(Student& X) {
    X.display();
}

void sn(GraduateStudent& Y) {
    Y.display();
}

int main()
{
    Student ds("Lo lee undergrate");
    GraduateStudent gs("noName");
    ds.addCourse(3, 8.0);
    ds.display();
    gs.addCourse(3, 3.0);
    gs.display();
    cout << endl;
    cout << endl;
    fn(ds);
    fn(gs);//同化效应，研究生对象在fn函数里并不被看作是研究生，结果便是表现为student类的操作了
    cout << endl;
    cout << endl;
    //sn(ds);//这个语句是错误的，
    sn(gs);
}

