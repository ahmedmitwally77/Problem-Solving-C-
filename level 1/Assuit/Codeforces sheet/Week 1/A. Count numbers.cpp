#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,q;
    cin>>n>>q;
    vector<int>freq(n+1 , 0);
    for (int i = 0; i < q; ++i) {
        int a,b;cin>>a>>b;
        if (a==1){
            freq[b]++;
        }
        else if(a==2){
            cout<<freq[b]<<endl;
        }
    }


    return 0;
}