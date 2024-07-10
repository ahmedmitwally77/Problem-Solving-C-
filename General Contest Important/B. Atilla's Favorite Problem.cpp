//https://codeforces.com/contest/1760/problem/B
#include <bits/stdc++.h>
    using namespace std;

    int arr[1000000]={0};
    int freq[100005]={0};
    int sfx[1000005]={0};


    int main() {

        ios::sync_with_stdio(false);
        cin.tie();
        int t;cin>>t;
        while(t--){
            int n;cin>>n;
            string s;
            cin>>s;
            map<char,int>mp;
            for (int i = 0; i < s.size(); ++i) {
                mp[s[i]]=s[i]-'a';
            }
            auto it=mp.end();
            it--;
            cout<<mp[it->first]+1<<endl;
        }




        return 0;
    }
