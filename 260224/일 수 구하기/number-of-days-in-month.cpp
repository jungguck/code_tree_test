#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    if (a%2 == 1 || a == 9){
        cout << "31";
    }
    else if (a%2 == 0){
        if (a == 2 ){
            cout <<"28";
        }
        else{
        cout <<"30";
        }
    }
    return 0;
}