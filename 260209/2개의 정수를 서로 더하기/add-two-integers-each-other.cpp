#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin >> a >> b;

    c = a;
    a = b+a;

    b = b+a;

    cout << a << " " <<  b;
    return 0;
}