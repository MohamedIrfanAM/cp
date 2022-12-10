// time-limit: 1000
// problem-url: https://codeforces.com/contest/1748/problem/B
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
  string s;
  cin >> n;
  cin >> s;
  
  vector<vector<int>> hash;
  vector<vector<int>> hash_reverse;
  vector<int> v(10);

  for(int i = 0 ; i < n; i++)
  {
    v[s[i]-48]++;
    hash.push_back(v);
  }

  vector<int> v2(10);
  for(int i = n-1; i >= 0; i--)
  {
    v2[s[i]-48]++;
    hash.push_back(v2);
  }


  
}

return 0;
}
