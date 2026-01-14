#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int number[100]; // 숫자로 이렇게 문자열음 받음 !! 100개 자리 있다는 말임 ㅋ 
    // string even = {0};
    cin >> n;

    
    for(int i = 0 ; i < n ; i++){
        cin >> number[i];
    }

    for(int i = n-1 ; i >= 0 ; --i){
      if (number[i]%2 == 0 ){
         cout << number[i] << " ";
      }
    }

    
    return 0;
}