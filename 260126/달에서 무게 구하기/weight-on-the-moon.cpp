#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    double a = 13;
    double b = 0.165000;
    double c = a*b;

    cout << a ;

    cout << fixed;
    cout.precision(6);
    cout << " * " << b << " = " <<c;

    return 0;
}