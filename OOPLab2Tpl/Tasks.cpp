#include <iostream>
using namespace std;
#include "Tasks.h"
#include "Examples.h"
void MenuTask()
{
    cout << "     Menu Task   \n";
    cout << "    1.  Calculation of expressions using bitwise operations  \n";
    cout << "    2.  Data encryption using bitwise operations \n";
    cout << "    3.  Data encryption using structures with bit fields \n";
    cout << "    4.  The problem of using bitwise operations \n";
    cout << "    5.  Examples of problems using bitwise operations \n";
    cout << "    6.  Exit \n";
}



int task1() {
  // Обчислення виразів з використанням побітових операцій
//Замітки до першого завдання:
//34 * b + (d * 15 + 12 * a) / 1024) - 8365 * c + d * 14
//2^1 * b + 2^5 * b + ((d * 2^4 - d + a * 2^3 + 2^2)/10) - (c * 2^13 + c * 2^7 + c * 2^5 + c * 2^3 + c * 2^2 + c) + (d * 2^3 + d * 2^2 + d * 2^1)
//(b<<1) + (b << 5) + (((d << 4) - d + (a << 3) + (a<<2))>>10) - ((c<<13) + (c<<7) + (c<<5) + (c<<3) + (c<<2) + c) + ((d << 3) + (d<<2) + (d<<1))
  int a, b, c, d;
  double x, y;
  cout << "Enter a, b, c, d:";
  cin >> a >> b >> c >> d;
  x = (b<<1) + (b << 5) + (((d << 4) - d + (a << 3) + (a<<2))>>10) - ((c<<13) + (c<<7) + (c<<5) + (c<<3) + (c<<2) + c) + ((d << 3) + (d<<2) + (d<<1));
  y = 34 * b + ((d * 15 + 12 * a) / 1024) - 8365 * c + d * 14;
  cout << "Result with bit operation:" << x << endl;
  cout << "Result:" << y << endl;
  return 0;
}

void task2()
{
    // Шифрування даних з використання побітових операцій 
    // Data encryption using bitwise operations
    cout << " Data encryption using bitwise operations  \n";

}

void task3()
{
    // Шифрування даних з використання стуктур з бітовими полями 
    // Data encryption using structures with bit fields
    cout << "  Data encryption using structures with bit fields \n";
}


void task4()
{   // Задача із використання побітових операцій
    // The problem of using bitwise operations
    cout << " Data encryption using structures with bit fields \n";

}


