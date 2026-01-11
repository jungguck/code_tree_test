#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;

    scanf("%d %d", &a, &b);

    if(a > 0){
        if(b >19){
             printf("WOMAN");

        }
        else{
            printf("GIRL");
        }
    }

    else {
        if(b>19){
            printf("MAN");

        }
        else{
            printf("BOY");

        }
    }
    return 0;
}