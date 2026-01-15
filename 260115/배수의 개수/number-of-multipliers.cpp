#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 10;
    int numbers[100];

    for(int i =0; i<n; i++){
        cin >> numbers[i];
    }

    int cnt_3 = 0;
    int cnt_5 = 0;


    for(int i = 0; i < 10; i++){
        if(numbers[i]%3 == 0){
 
            cnt_3 += 1;

        }

        if(numbers[i]%5 == 0){
 
            cnt_5 += 1;

        }
    } 

    cout << cnt_3 <<" " << cnt_5 << endl;

    return 0;
}