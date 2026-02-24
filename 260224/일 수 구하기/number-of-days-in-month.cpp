#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10|| a == 12 ){
        cout << "31";
    }
    else if (a == 4 || a == 6 || a == 9 || a == 11 ){
        cout <<"30";
    }
    else if (a == 2 ){
        cout <<"28";
    }

    return 0;
}