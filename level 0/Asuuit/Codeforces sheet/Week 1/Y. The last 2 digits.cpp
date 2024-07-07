#include <iostream>
using namespace std;
int main() {
    long a,b,c,d;
    cin >>a>>b>>c>>d;
    int v = ((a%100)*(b%100)*(c%100)*(d%100))%100;

    if(v < 10){
        cout << 0 << v << "\n";
    }
    else{
        cout << v << "\n";
    }
    return 0;
}