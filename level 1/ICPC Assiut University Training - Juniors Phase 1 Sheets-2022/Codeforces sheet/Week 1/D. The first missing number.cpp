#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

   int n,m;cin>>n>>m;//7 5
    int arr[m*2+1]={0};
    for (int i = 0; i < n; ++i) {   // -5 -4 -3 -2 -1  0  1  2  3  4  5
        int item;cin>>item;         //  0  1  2  3  4  5  6  7  8  9  10
        arr[item + m]++;
    }

    for(int i=0 ; i<2*m+1;i++)
    {
        if(arr[i]==0)
        {
            cout<<i-m;
            break;
        }
    }
    return 0;
}