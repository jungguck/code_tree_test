#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    float a,b,c;
    cin >> a >> b >> c;

    if ((a>b && a<c)|| (a<b && a>c)){
        cout << a;
    }
    else if ((b>a && b<c)|| (b<a && b>c)){
        cout << b;
    }
    else if ((c>b && c<a)|| (c<b && c>a)){
        cout << c;
    }


    return 0;
}