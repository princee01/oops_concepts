#include <iostream>
using namespace std;
// class customer
// {
//     string name;
//     int balance, acc_no;

// public:
//     customer(string name, int balance, int acc_no)
//     {
//         this->name = name;
//         this->balance = balance;
//         this->acc_no = acc_no;
//     }
//     void deposit(int amount)
//     {
//         if (amount > 0)
//         {
//             balance += amount;
//             cout << amount << " rs deposited in account" << endl;
//         }
//         else
//         {
//             throw "amount is low";
//         }
//     }
//     void withdraw(int amount)
//     {
//         if (amount > 0 && amount <= balance)
//         {
//             balance -= amount;
//             cout << amount << " rs withdraw from accound" << endl;
//         }
//         else if (amount < 0)
//         {
//             throw "amount is too low to withdraw";
//         }
//         else
//         {
//             throw "insufficiant balance";
//         }
//     }
// };
// int main()
// {
//     customer obj("prince", 8000, 1234);
//     try
//     {
//         obj.deposit(2000);
//         obj.withdraw(10000);
//         obj.deposit(-2000);
//     }
//     catch (const char *p)
//     {
//         cout << "Exception Occured:" << p;
//     }
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     try
//     {
//         if (b == 0)
//             throw "divsible by 0 not possible";
//         int c = a / b;
//         cout << c << endl;
//     }
//     catch (const char *p)
//     {
//         cout << "Exception occured:" << p << endl;
//     }
// }
