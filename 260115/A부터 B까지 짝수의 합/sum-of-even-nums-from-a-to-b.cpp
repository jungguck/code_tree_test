
#include <iostream>

using namespace std;

int main() {

    int A,B;
    int total = 0;

    cin >> A >> B; 

    int n = B-A+1;

    for(int i=0; i <n ; i++){

        if(A % 2 == 0){
            total = total + A;
        }
        A = A+1;
    }

    cout << total << endl;

    return 0;
}