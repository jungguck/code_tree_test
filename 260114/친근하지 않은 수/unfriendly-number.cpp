#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int number[100];
    int answer[100];
    int cnt = 0;

    cin >> n;

    for(int i = 0; i<n ; i++){
        number[i] = i+1;        
    }

    for(int i = 0; i < n; i++){
        if( number[i]%2 != 0){
            if( number[i]%3 != 0){
               if( number[i]%5 != 0){
                 answer[i] = number[i];
                 cnt = cnt + 1;
               }
            }
        }
    }

    cout << cnt;

    return 0;
}