#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    if (a>=80){
        cout << "pass" << endl;
    }
    else{
        int b = 80 - a;
        cout << b << " more score";
    }

    return 0;
}