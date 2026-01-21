#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;

    cin >> n;

    for(int i=0; i<n; i++){

        int row[n];
        int cnt = 1;
        for(int j =0; j<n ; j++){
            row[j] = cnt;
            cnt += 1;
        }

        if(i%2 != 0){
            for(int j = n-1; j >= 0; j--){
                cout << row[j] << "";
            }
        }
        else{
            for(int j =0; j<n; j++){
                cout << row[j] << "" ;
            }

        }
        cout << "\n";
    }
    return 0;
}