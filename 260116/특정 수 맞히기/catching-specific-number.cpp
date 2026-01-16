#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;

    while(true){

        cin >> a;

        if(a>26){
            cout << "Lower" << endl;
        }
        else if(a<24){
            cout << "Higher"<< endl;
        }
        else{
            cout << "Good"<< endl;
            break;
        }

    }
    return 0;
}