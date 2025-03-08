#include <iostream>
using namespace std;
class Customer
{

    string name;
    int acc_no, balance;
    static int total_customer;
    static int total_balance;

public:
    Customer(string a, int b, int c)
    {
        name = a;
        acc_no = b;
        balance = c;
        total_customer++;
        total_balance += balance;
    }

    static void staticdisplay()
    {
        cout << "total customer: " << total_customer << endl;
        cout << "total balance: " << total_balance << endl;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            total_balance += amount;
        }
    }

    void display()
    {
        cout << name << " " << acc_no << " " << balance << " " << total_customer << endl;
    }

    void display_total_customer()
    {
        cout << total_customer;
    }
};
int Customer::total_customer = 0;
int Customer::total_balance = 0;
int main()
{
    Customer obj1("prince", 1, 1000);
    Customer obj2("rohit", 2, 2000);
    // obj1.display();
    // obj2.display();
    // obj2.display_total_customer();

    obj1.deposit(800); // deposit of 800 should reflect in balance
    Customer::staticdisplay();
}