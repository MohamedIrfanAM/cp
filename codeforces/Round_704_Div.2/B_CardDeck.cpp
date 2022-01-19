// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1492/B
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
  vector<int> ans;
  map<int,int> m;

  for(int i = 0 ; i < n; i++)
  {
    cin >> v[i];
    m[v[i]] = i;
  }

  int last_pos = n;
  
  for(auto it = m.rbegin(); it != m.rend(); it++)
  {
    if(it->second < last_pos)
    {
      for(int i = it->second; i < last_pos; i++)
      {
        ans.push_back(v[i]);
      }
      last_pos = it->second;
    }
  }

  for(int i : ans)
  {
    cout <<  i << " " ;
  }
  cout << "\n";



}

return 0;
}
