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

    int t,n;cin>>t>>n;

    pair<int,int>p[t];

    for (int i = 0; i < t; ++i) {
        cin>>p[i].first;
        p[i].second=i+1;
        arr[p[i].first]=true;
    }

    int count=0;

    for (int i = 1; i < 101 ; ++i) {
        if(arr[i] == true)
            count++;
    }


    if (count < n) {
        cout << "NO\n";
        return 0;
    }
        cout << "YES\n";
        set<int> printed;
        int printed_count = 0;

        for (int i = 0; i < t && printed_count < n ; ++i) {
            if (printed.find(p[i].first) == printed.end()) {
                cout << p[i].second << " ";
                printed.insert(p[i].first);
                printed_count++;
            }
        }


    return 0;
}

