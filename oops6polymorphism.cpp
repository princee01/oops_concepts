#include <iostream>
using namespace std;
// function overloading...................................................................
// class area
// {
// public:
//     int calcarea(int r)
//     {
//         return 3.14 * r * r;
//     }
//     int calcarea(int a, int b)
//     {
//         return a * b;
//     }
// };
// int main()
// {
//     area obj1;
//     area obj2;
//     cout << obj1.calcarea(4)<<endl;
//     cout << obj2.calcarea(4, 4)<<endl;
// }

// operator overloading....................................................................
// class complex
// {
//     int real, img;

// public:
//     complex() {};
//     complex(int real, int img)
//     {
//         this->real = real;
//         this->img = img;
//     }
//     void display()
//     {
//         cout << real << "+i" << img << endl;
//     }
//     complex operator+(complex &c)
//     {
//         complex ans;
//         ans.real = real + c.real;
//         ans.img = img + c.img;

//         return ans;
//     }
// };
// int main()
// {
//     complex obj1(3, 4);
//     complex obj2(4, 5);
//     obj1.display();
//     obj2.display();
//     complex obj3;
//     obj3 = obj1 + obj2;
//     obj3.display();
// }

// vertual function(runtime polymorphism).................................................

class animal
{
public:
    virtual void speak()
    {
        cout << "hu hu";
    }
};
class dog : public animal
{
public:
    void speak()
    {
        cout << "barking....";
    }
};
int main()
{
    animal *p;
    p = new dog();
    p->speak();
}