// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1511/C
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int tst = 1;
while(tst--)
{

  int n,q;
  cin >> n >> q;

  map<int,int> m;

  for(int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    if( m[x] == 0)
    {
      m[x] = i ;
    }
  }

  for(int j = 0; j < q;j++)
  {
    int x;
    cin >> x;
    cout << m[x] << " ";

    for(auto &p: m)
    {
      if(p.first != x && p.second < m[x])
        p.second+=1;
    }
    m[x] = 1;
  }
    cout << "\n";



}

return 0;
}
