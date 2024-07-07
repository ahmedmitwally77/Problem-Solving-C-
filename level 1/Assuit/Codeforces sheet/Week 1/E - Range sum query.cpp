#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n,q;cin>>n>>q;
    long long arr[n+1];
    for (int i = 1; i <= n; ++i) {
        cin>>arr[i];
    }
    long long p[n+1];
    p[0]=0;
    for (int i = 1; i <= n; ++i) {
        p[i]=p[i-1]+arr[i];
    }
    while (q--) {
        int l, r;
        cin >> l >> r;

        if (l > r) {
            swap(l, r);
        }
        cout << p[r] - p[l - 1] << endl;
    }



    return 0;
}