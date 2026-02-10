#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int h,w;
    cin >> h >> w;
    int b;

    b = 10000*w/(h*h);

    if (b>=25){
        cout << b << endl;
        cout << "Obesity";
    }
    else{
        cout << b;

    }

    return 0;
}