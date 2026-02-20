#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    if(a>=3 && a<=5){
        cout<< "Spring";
    }
    if(a>=6 && a<=8){
        cout<< "Summer";
    }
    if(a>=9 && a<=11){
        cout<< "Fall";
    }
    if(a>=12 || a<=2){
        cout<< "Winter";
    }
    return 0;
}