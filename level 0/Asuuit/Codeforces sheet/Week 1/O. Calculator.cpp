#include <iostream>
using namespace std;
int main()
{long A,B;
    char S;
    cin>>A>>S>>B;
    if (S =='+'){
        cout <<A+B;
    }
    else if (S =='-'){
        cout <<A-B;
    }
    else if (S =='*'){
        cout <<A*B;
    }
    else if (S =='/'){
        cout <<A/B;
    }

    return 0;
}