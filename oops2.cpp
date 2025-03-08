#include <iostream>
using namespace std;
class customer
{
public:
    string name;
    int age, acc_no;

public:
    // default constructor
    // customer()
    // {
    //     name = "prince";
    //     acc_no = 1234;
    // }
    // parameterized constructor
    customer(string name, int acc_no)
    {
        this->name = name;
        this->acc_no = acc_no;
    }
    // copy const
    customer(customer &B)
    {
        name = B.name;
        acc_no = B.acc_no;
    }
    // constructor overloading
    // customer(string name)
    // {
    //     this->name = "rohit";
    // }
    // inline constructor
    // inline customer(string a, int b) : name(a), acc_no(b) {}

    void display()
    {
        cout << name << " " << acc_no << endl;
    }
};
int main()
{
    // customer obj;
    // obj.display();
    customer obj1("prince", 19234);
    // obj1.display();
    // customer obj2("rohit");
    // obj2.display();
    customer obj2(obj1);
    obj1.display();
    obj2.display();
}