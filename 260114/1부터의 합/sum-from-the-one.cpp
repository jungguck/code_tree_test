#include <iostream>
//#include <iostream>

using namespace std;
//using namespace std;

int main(){

    int a;
    cin >> a;

    int b = 0;

    for(int i = 0; i<101; i++){
        b = b+i;

        if(b>a){
            cout << i << endl;
            break;
        }
        
    }

    return 0;
}
