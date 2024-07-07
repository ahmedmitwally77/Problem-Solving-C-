#include<iostream>
#include <cmath>
using namespace std;

int main(){
    double a;
    cin>>a;
    int X =floor(a);
    if (X==a){
        cout <<"int "<<X;
    }
    else {
        cout<<"float "<<X<<" "<<double (a-floor(a));
    }


    return 0;
}