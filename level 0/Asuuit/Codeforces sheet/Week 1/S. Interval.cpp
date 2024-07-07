#include <iostream>

using namespace std;

int main(){

    float f;

    cin >> f;

    if(f < 0.0000)
        cout << "Out of Intervals\n";
    else if(f >= 0.0000 && f <= 25.0000)
        cout << "Interval [0,25]\n";
    else if(f > 25.0000 && f <=50.0000)
        cout << "Interval (25,50]\n";
    else if(f > 50.0000 && f <=75.0000)
        cout << "Interval (50,75]\n";
    else if(f > 75.0000 && f <=100.0000)
        cout << "Interval (75,100]\n";
    else if(f > 100.0000)
        cout << "Out of Intervals\n";

    return 0;
}