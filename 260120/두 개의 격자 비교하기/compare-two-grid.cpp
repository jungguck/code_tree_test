#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,m;

    cin >> n >> m;

    int arr[100][100];

    for(int i =0 ; i<n*2; i++){
        for(int j =0 ; j<m; j++){
            cin >> arr[i][j];
        }
    }

    for (int i=0; i<n; i++){
        for (int j =0; j<m; j++){
            if (arr[i][j] == arr[i+n][j]){
                arr[i][j]  = 0;
            }
            else{
                arr[i][j] = 1;
            }
        }
    }

    for (int i=0; i<n;i++){
        for(int j =0; j<m; j++){
            cout<< arr[i][j]<<" ";
        }
        cout <<endl;
    }



    return 0;
}