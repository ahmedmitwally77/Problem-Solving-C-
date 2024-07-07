#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long t,n;cin>>n>>t;
    vector<int>v(n);
    for (auto it=v.begin(); it != v.end() ; ++it) {
        cin>>*it;
    }
    while (t--) {
        string s;cin>>s;
        if (s == "sort"){
            int l,r;cin>>l>>r;
            sort(v.begin()+l-1,v.begin()+r);
        }
        else if (s == "reverse"){
            int l,r;cin>>l>>r;
            reverse(v.begin()+l-1,v.begin()+r);
        }
        else if(s == "pop_back"){
            v.pop_back();
        }
        else if(s == "push_back"){
            int l;cin>>l;
            v.push_back(l);
        }
        else if(s == "front"){
            cout<<v.front()<<endl;
        }
        else if(s == "back"){
            cout<<v.back()<<endl;
        }
        else if(s == "print"){
            int l;cin>>l;
            cout<<v[l-1]<<endl;
        }






    }
    return 0;
}

