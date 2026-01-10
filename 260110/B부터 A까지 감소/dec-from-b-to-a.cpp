#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int a, b;

	// 입력
	cin >> a >> b;
    
    // 출력
	for(int i = b; i >= a; i--)
		cout << i << " ";

    return 0;
}