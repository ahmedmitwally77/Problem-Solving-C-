#include <bits/stdc++.h>
#include <forward_list>
#include <set>
#include <utility>
using namespace std;

bool arr[101]={false};

bool comp(const pair<int, int>& p1, const pair<int, int>& p2){
    if (p1.first < p1.second)
        return true;
    else
        return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int size,q;
    cin>>size>>q;
    int arr[size];
    vector<long long> v;
    map<long long,long long> m;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        if(!m[arr[i]])
            v.push_back(arr[i]);
        m[arr[i]]++;
    }
    sort(v.begin(),v.end());
    while(q--){
        int num;cin>>num;
        int index = lower_bound(v.begin(),v.end(),num)-v.begin();
        if(m[num]){
            cout<<index<<" "<<v.size()-1-index<<endl;
        } else {
            cout<<index<<" "<<v.size()-index<<endl;
        }
    }

    return 0;
}

