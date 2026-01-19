#include <iostream>

using namespace std;

int st, ed;
int main() {


    int answer = 0;

    cin >> st >> ed;


    for(int i = st; i<=ed ; i++){

        int cnt = 0;

        for(int j = 1; j<= i; j++){

            if(i % j == 0){
                cnt = cnt+1;
            }
        }
         if(cnt == 3){
            answer = answer +1 ;
        }

    }

        cout << answer;

    // Please write your code here.

    return 0;
}
