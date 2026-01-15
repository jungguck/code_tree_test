
#include <iostream>
using namespace std;

int main() {

    string words[5] = {"apple","banana","grape","blueberry","orange" };
    char w;
    int cnt = 0;
    cin >> w; 

    for(int i = 0; i < 5; i++){
        if(words[i][2] == w or words[i][3] == w ){
            cout << words[i]<< endl;
            cnt += 1;
        }
    }
    cout << cnt;


    return 0;
}