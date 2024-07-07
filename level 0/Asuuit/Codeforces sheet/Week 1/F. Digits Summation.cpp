#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    long long N,M,N_last_digital,M_last_digital ,sum ;
    cin >>N>>M;
    N_last_digital=N%10;
    M_last_digital=M%10;
    sum =N_last_digital+M_last_digital;
    cout <<sum;







    return 0;
}
