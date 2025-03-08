#include <iostream>
using namespace std;
// class Human
// {
//     string religion, color;

// protected:
//     string name;
//     int age, weight;
// };

// class student : public Human
// {
//     int roll_no, fees;

// public:
//     student(string name, int age, int weight, int roll_no, int fees)
//     {
//         this->name = name;
//         this->age = age;
//         this->weight = weight;
//         this->roll_no = roll_no;
//         this->fees = fees;
//     }
//     void display()
//     {
//         cout << name << " " << age << " " << weight << " " << roll_no << " " << fees << endl;
//     }
// };
// int main()
// {
//     student obj("prince", 21, 55, 123, 5000);
//     obj.display();
// }

// class human
// {
//     string religion, color;

// protected:
//     string name;
//     int age, weight;
// };
// class student : private human
// {
//     int roll, fees;

// public:
//     student(string name, int age, int weight, int roll, int fees)
//     {
//         this->name = name;
//         this->age = age;
//         this->weight = weight;
//         this->roll = roll;
//         this->fees = fees;
//     }
//     void display()
//     {
//         cout << name << " " << age << " " << roll << endl;
//     }
// };
// int main()
// {
//     student obj("prince", 21, 50, 1234, 10000);
//     obj.display();
// }

// multiple inheritance...................................................................

class engineer
{
protected:
    string name;

public:
    void work()
    {
        cout << "i am an engineer" << endl;
    }
};
class youtuber
{
protected:
    int subscribers;

public:
    void content()
    {
        cout << "i am an influncer" << endl;
    }
};
class person : private engineer, private youtuber
{
    int age;

public:
    person(string name, int age, int subscribers)
    {
        this->name = name;
        this->age = age;
        this->subscribers = subscribers;
    }
    void display()
    {
        cout << name << " " << age << " " << subscribers << endl;
    }
};
int main()
{
    person obj("prince", 21, 14000);
    obj.display();
}