#include <iostream>
using namespace std;

int a[10][10];


int total = 0;

int main() {

    for(int i = 0; i<4 ; i++){
        for(int j =0; j <4; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i<4 ; i++){
        int total = 0;
        for(int j =0; j <4; j++){
            total = total+ a[i][j];
        }
        cout << total<<endl;
    }


    // Please write your code here.
    return 0;
}