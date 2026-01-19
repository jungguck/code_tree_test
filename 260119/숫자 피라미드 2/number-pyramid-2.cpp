#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int c =1;

    cin >> N;

    for(int i = 0; i <N ; i++){
        for(int j =0; j<=i; j++){
            cout << c << " ";
            c = c+1;

            if (i == j){
                cout << "\n";
            }
        }

    }
    return 0;
}