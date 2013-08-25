#include<iostream>
#include<cstring>
#include<list>

using namespace std;

class Account {
public:
    Account(string acntNumber, double balance) {
        this->acntNumber = acntNumber;
        this->balance = balance;
    }

    virtual void display() const {
        cout << "Account:"+acntNumber+" = " << balance << "\n";
    }

    double getBalan() const {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    virtual void withdrawal(double amount) {
        return;
    }

    bool operator == (const Account& a) {
        return acntNumber == a.acntNumber;
    }
protected:
    string acntNumber;
    double balance;
};

class Savings : public Account {
public:
    Savings(string acntNumber, double balance) : Account(acntNumber, balance) { }

    void display() const {
        cout << "Savings";
        Account::display();
    }

    void withdrawal(double amount) {
        if(balance + minBalance < amount)
            cout << "Insufficient funds withdrawal : " << amount << endl;
        else
            balance -= amount;
    }
private:
    static double minBalance;
};
double Savings :: minBalance = 0;
typedef enum REMIT(remitByPost, remitByCable, other);

class Checking : public Account {
public:
    Checking(string acntNumber, double balance) : Account(acntNumber, balance),remittance(other) { }

    void display() const {
        cout << "Checking : ";
        Account :: display();
    }

    void withdrawal(double amount) {
        if(remittance == remitByPost)
            amount += 30;
        if(remittance == remitByCable)
            amount += 60;
        if(balance < amount)
            cout << "Insufficient funds withdrawal :" << amount << endl;
        else
            balance -= amount;
    }

    void setRemit(REMIT re) {
        remittance=re;
    }
};

int main()
{
    Savings s1("00001", 10000), s2("00002", 50000);
    Checking c1("00091", 10000), c2("00056", 10000);
    s1.deposit(100);
    c1.deposit(2000);
    s2.withdrawal(2500);
    c2.withdrawal(1555);
    list<Account*> a;
    a.push_back(&s1);
    a.push_back(&s2);
    a.push_back(&c1);
    a.push_back(&c2);
    cout << "There are " << a.size() << "accounts:\n";
    for(list<Account> :: iterator it = a.begin(); it != a.end(); ++it)
        (it)->display();
}

    




