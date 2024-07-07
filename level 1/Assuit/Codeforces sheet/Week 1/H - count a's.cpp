#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;cin>>s;
    int arr[s.size()]={0};

    if(s[0]=='a')
        arr[0]=1;
    else
        arr[0]=0;

    for (int i = 1; i < s.size(); ++i) {
        if(s[i] == 'a') {
            arr[i] += arr[i-1] + 1;
        }
        else
            arr[i]+=arr[i-1];
    }

    int q;
    cin >> q;

    while (q--) {
        int l,r;cin>>l>>r;
        if (l==1)
            cout<<arr[r-1]<<endl;
        else

        cout<<(arr[r-1] - arr[l-2])<<endl;

    }
    return 0;
}
