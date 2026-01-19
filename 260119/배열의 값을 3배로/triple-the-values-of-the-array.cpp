#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int matrix[3][3];

    for(int i = 0;  i<3; i++){
        for(int j=0; j <3 ; j++){
            cin >> matrix[i][j];   // int 재선언하면안됌 
        }
    }

    for(int i = 0;  i<3; i++){
        for(int j=0; j <3 ; j++){
            matrix[i][j] = 3 * matrix[i][j];   // int 재선언하면안됌 
        }
    }

    for(int i = 0;  i<3; i++){
        for(int j=0; j <3 ; j++){
           cout << matrix[i][j] << " ";
        }
        cout << endl;
        
    }


    return 0;
}