#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    
    string text = {0};

    cin >> text;

    int n = text.length();
    text[1] = 'a';
    text[n-2] = 'a';

    cout << text;

    return 0;
}