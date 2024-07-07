#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;cin>>s;
    vector<int>freqc(26 , 0);
    vector<int>freqs(26 , 0);

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= 'A' && s[i] <= 'Z'){
            freqc[s[i] - 'A']++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z'){
            freqs[s[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; ++i) {
        if(freqc[i] > 0){
            cout<<char(i + 65) << " "<< freqc[i]<<endl;
        }
    }

    for (int i = 0; i < 26; ++i) {
        if(freqs[i] > 0){
            cout<<char(i + 97) <<" "<< freqs[i]<<endl;
        }
    }


    return 0;
}