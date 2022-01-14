// time-limit: 1000
// problem-url: https://codeforces.com/contest/1625/problem/A
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
  int n,l;
  cin >> n >> l;
  vector<int> v(n);
  map<int,int> C;

  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < l; j++)
    {
      if((1<<j)&v[i]) C[j]++;
    }
  }
  
  int ans = 0;
  for(auto &p:C)
  {
    if(p.second > n/2)
    {
      ans = ans|(1<<p.first);
    }
  }
  cout << ans <<  "\n";
  
}

return 0;
}
