#include <iostream>
using namespace std;
int main(){
    long X;
    cin>>X;

    while (X>=10){
        X=X/10;
    }
    if(X%2==0) {
        cout << "EVEN";
    }
    else {
        cout << "ODD";
    }

    return 0;
}