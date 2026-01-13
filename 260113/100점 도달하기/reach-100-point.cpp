#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int number;
    cin >> number;

    int n = (100 - number +1);

    for(int a=0; a < n ; a++){

        if(number >= 90 ){
            cout << 'A' << " ";
        }
        else if(number > 80){
            cout << 'B' << " ";
        }
        else if(number > 70){
            cout << 'C' << " ";
        }
        else if(number >= 60){
            cout << 'D' << " ";
        }
        else {
            cout << 'F' << " ";
        }
        number = number + 1;
    }

    return 0;
}