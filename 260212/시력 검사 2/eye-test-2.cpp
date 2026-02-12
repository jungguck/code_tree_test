#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    float number;
    cin >> number;

    if(number <0.5){
        cout << "Low";
    }
    else if ( number >= 0.5 && number <1){
        cout << "Middle";
    }
    else{
        cout << "High";
    }

    return 0;
}