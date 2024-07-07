#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main() {
    long A,B ,C;
    cin>>A>>B>>C;
    int minval = min(A, min(B, C));
    int maxval = max(A, max(B, C));
    cout<<minval<<" "<<maxval;



    return 0;
}
