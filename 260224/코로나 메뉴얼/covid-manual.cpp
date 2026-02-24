#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a2,b2,c2;
    int a1,b1,c1;
    int n = 0;
    scanf (" %c %d",&a2, &a1);
    scanf (" %c %d",&b2, &b1);
    scanf (" %c %d",&c2, &c1);

    if(a2 == 'Y'){
        if (a1 >=37){
            n +=1;
        }
    }
    if(b2 == 'Y'){
        if (b1 >=37){
            n +=1;
        }
    }
    if(c2 == 'Y'){
        if (c1 >=37){
            n +=1;
        }
    }

    if (n>=2){
        cout << "E";
    }
    else{
        cout << "N";
    }

    return 0;
}