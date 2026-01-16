#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int A,B;

    cin >> A >> B;

    while(true){

        cout << A << " ";

        if(A%2 == 0){
            A = A + 3;
        }
        else {
            A = A *2;
        }

        if(A>B){
            break;
        }



    }

    return 0;
}