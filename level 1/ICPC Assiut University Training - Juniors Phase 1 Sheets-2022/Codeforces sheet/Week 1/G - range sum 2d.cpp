#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

long long n,m,q;cin>>n>>m>>q;
vector<vector<long long>>arr(n+1,vector<long long>(m+1));
for (int  i=1;i<=n;i++)
{
    for (int j=1;j<=m;j++)
    {
        cin>>arr[i][j];
    }
}
    for (int  i = 1; i <=n; i++)
    {
        for (int  j = 1; j <=m; j++)
        {
              arr[i][j] += arr[i][j-1];
        }

    }
    for ( int i = 1; i <=n; i++)
    {
          for ( int j = 1; j <=m; j++)
          {
                arr[i][j] += arr[i-1][j];
          }
    }
int x1,y1,x2,y2;
while (q--)
{
  cin>>x1>>y1>>x2>>y2;
  cout <<arr[x2][y2] - arr[x1-1][y2] -arr[x2][y1-1] + arr[x1-1][y1-1]<<endl;
}
    return 0;
}