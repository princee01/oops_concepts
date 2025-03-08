#include <iostream>
using namespace std;
// class Student
// {
// public:
//     string name;
//     int age, roll;
//     string grade;
// };
// int main()
// {
//     Student s1;
//     s1.name = "prince";
//     s1.age = 21;
//     s1.roll = 220756;
//     s1.grade = "A+";
//     Student s2;
//     s2.name = "rohit";

//     cout << s1.name << endl;
//     cout << s1.age << endl;
//     cout << s2.name;
// }

class student
{
public:
    string name;
};
int main()
{
    student *st = new student;
    (*st).name = "rohit";
    cout << st->name;
}