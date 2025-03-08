// static data members-->static variable and static method
#include <iostream>
using namespace std;
// class customer
// {
//     string name;
//     int acc_no, balance;
//     // static int total_customer;

// public:
//     static int total_customer;
//     customer(string name, int acc_no, int balance)
//     {
//         this->name = name;
//         this->acc_no = acc_no;
//         this->balance = balance;
//         total_customer++;
//     }
//     void display()
//     {
//         cout << name << " " << acc_no << " " << balance << " " << total_customer << endl;
//     }
// };
// int customer::total_customer = 0;
// int main()
// {
//     customer obj1("prince", 123, 8000);
//     customer obj2("mohit", 567, 9000);
//     obj1.display();
//     obj2.display();
//     customer obj3("rohit", 342, 7000);
//     obj3.display();

//     // total customer directly accesed by using class because it was declared public
//     // customer::total_customer = 5;
//     // obj3.display();
// }

// static member function................................................................
// class customer
// {
//     string name;
//     int acc_no, balance;
//     static int total_customer;
//     static int total_balance;

// public:
//     customer(string name, int acc_no, int balance)
//     {
//         this->name = name;
//         this->acc_no = acc_no;
//         this->balance = balance;
//         total_customer++;
//         total_balance += balance;
//     }
//     static void display_total()
//     {
//         cout << total_customer << endl;
//         cout << total_balance << endl;
//     }
//     void display()
//     {
//         cout << name << " " << acc_no << " " << balance << endl;
//     }
// };
// int customer::total_balance = 0;
// int customer::total_customer = 0;
// int main()
// {
//     customer obj1("prince", 123, 9000);
//     customer obj2("rohit", 234, 7000);
//     customer::display_total();
// }

// encapsulation.......................................................................
class customer
{
    string name;
    int balance, acc_no;

public:
    customer(string a, int b)
    {
        name = a;
        balance = b;
    }
    void deposit(int amount)
    {
        if (amount <= 0)
        {
            cout << "invalid amount" << endl;
        }
        else
        {
            balance += amount;
        }
    }
    void display()
    {
        cout << name << " " << balance << endl;
    }
};
int main()
{
    customer obj1("prince", 8000);
    obj1.display();
    obj1.deposit(5000);
    obj1.display();
}