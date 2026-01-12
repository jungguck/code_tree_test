#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin >> a >> b;

    int arry[100] = {0};
    arry[0] = a;
    arry[1] = b;

    for(int i =2; i<10; i++){

     arry[i] = (arry[i-2] + arry[i-1])%10;
    }

    for(int i = 0; i <10; i++){
        
        cout << arry[i] << " ";
    }



    return 0;
}