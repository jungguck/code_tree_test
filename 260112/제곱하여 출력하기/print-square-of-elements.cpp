#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int arry[4];
    int doubled[4];
    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> arry[i];
    }

    for(int i =0; i<n; i++){
        doubled[i]= arry[i]*arry[i];
    }

    for(int i = 0; i<n; i++){

        cout << doubled[i]<< " ";
    }

    return 0;
}