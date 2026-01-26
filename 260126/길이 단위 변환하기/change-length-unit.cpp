#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double ft = 30.48;
    double mi = 160934;

    double a = 9.2*30.48;
    double b = 160934*1.3;
    cout << fixed;
    cout.precision(1);

    cout << "9.2ft"<<" = " << a <<"cm" << endl;
    cout << "1.3mi"<<" = " << b <<"cm";    

    return 0;
}