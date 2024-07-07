#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main() {
    char X;
    cin >> X;
    if(int (X)>=65 &&int (X)<=90 ){
        cout<<"ALPHA"<<endl<< "IS CAPITAL";
    }
    else if (int (X)>=97 &&int (X)<=122) {
        cout << "ALPHA" << endl << "IS SMALL";
    }
    else if (X>=48 && X<=57){
        cout <<"IS DIGIT"<<endl;
    }
    else {
        cout <<"Character is a special symbol"<<endl;
    }

    return 0;
}

