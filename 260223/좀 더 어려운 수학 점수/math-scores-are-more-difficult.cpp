#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    if (a>c){
        cout << "A";
    }
    else if (c>a){
        cout << "B";
    }
    else if (a==c){
       if (b>d){
        cout << "A";
       }
       else{
        cout << "B";
       }
    }


    return 0;
}