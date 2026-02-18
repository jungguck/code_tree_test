#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    float a,b,c;
    cin >> a >> b >> c;

    if (a>b && b>c){
        cout << c;
    }
    else if (b>c && c>a){
        cout << a;
    }
    else{
        cout << b;
    }
    return 0;
}