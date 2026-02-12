#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    float a;

    cin >> a;

    if (a>=100){
        cout << "vapor";
    }
    else if (a>=0){
        cout << "water";
    }
    else {
        cout << "ice";
    }
    return 0;
}