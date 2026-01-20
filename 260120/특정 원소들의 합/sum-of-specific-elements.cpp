#include <iostream>
using namespace std;

int arr[10][10];
int total = 0;

int main() {

    for(int i =0; i<4; i++){
        for(int j=0 ; j<4 ; j++){
            cin >> arr[i][j];
        }
    }

    for(int i =0; i<4; i++){
        for(int j=0 ; j<=i ; j++){
            total = total + arr[i][j];
        }
    }

    cout << total;
    // Please write your code here.
    return 0;
}