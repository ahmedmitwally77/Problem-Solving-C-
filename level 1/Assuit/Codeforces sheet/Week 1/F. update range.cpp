#include<bits/stdc++.h>
using namespace std;
long long arr[100000]={0};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n,q;
    cin>>n>>q;
    vector<long long>v;

    long long num;
    for (int i = 0; i < n; ++i)
    {
        cin>>num;
        v.push_back(num);
    }
    long long l,r,val;
    while (q--)
    {
        cin>>l>>r>>val;
        arr[l-1]+=val;
        arr[r]-=val;
    }
    for (int i = 1; i <= n; ++i) {
        arr[i]+=arr[i-1];
    }

    for (int i = 0; i < n ; ++i) {
        v[i]+=arr[i];
        cout<<v[i]<<" ";
    }



    return 0;
}