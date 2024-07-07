#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    long double R;
    double PI = 3.141592653;
    cin >>R;
    double Area = PI*R*R;
    cout <<fixed<<setprecision(9)<< Area;

    return 0;
}
