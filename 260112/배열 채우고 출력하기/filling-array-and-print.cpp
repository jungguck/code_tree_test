#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    char arrary[10];

    for(int i =0; i<10;i++){
        cin >> arrary[i];
    }

    for(int i = 0; i <10; i++){
        cout << arrary[9-i];
    }

    return 0;
}