#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    float a;
    float b;

    cin >> a >> b;

    float c = a+b;

    cout << fixed;
    cout.precision(2);

    cout << c;


    return 0;
}