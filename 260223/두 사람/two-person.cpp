#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    char c,d;
    cin >> a >> c >> b >> d;

    if ( a>= 20 && b >=20 && c == 'M' || d == 'M'){
        cout << "1";
    }
    else{
        cout << "0";
    }


    return 0;
}