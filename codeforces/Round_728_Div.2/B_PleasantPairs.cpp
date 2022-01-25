// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1541/B
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n; 
  cin >> n;
  vector<int> v(n);
  vector<int> pos((2*n)+1);

  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
    pos[v[i]] = i+1;
  }
  
  int ans = 0;
  for(auto &x : v)
  {
    int M = 1;
    while((x*M) < (2*n))
    {
      if(pos[M]+pos[x] == x*M && pos[x] < pos[M])
      {
        ans++;
      }
      M++;
    }
  }
  cout << ans << "\n";
}

return 0;
}
