#include <iostream>

using namespace std;

int main(){
    int years, months, days;

    cin>>days;
    years = days / 365;
    months =( days % 365) / 30;
    days = (days % 365 )% 30;

    cout<<years<<" years"<<endl;
    cout<<months<<" months"<<endl;
    cout<<days<<" days"<<endl;

    return 0;
}