#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;


    if(a%4 == 0){
        if(a%100 == 0){
            if(a%400 == 0){
                printf("true");
            }
            else{
                printf("false");
            }

        }
        else{

        printf("true");
        }
    }

    else{

        printf("false");
    }

    return 0;
}