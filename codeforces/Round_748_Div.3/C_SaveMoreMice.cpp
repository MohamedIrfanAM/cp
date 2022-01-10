// time-limit: 4000
// problem-url: https://codeforces.com/problemset/problem/1593/C
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
  int n, k;
  cin >> n >> k;
  vector<int> v;
  for(int i = 0; i< k;i++)
  {
    int x;
    cin >> x;
    v.push_back(n-x);
  }
  sort(v.begin(),v.end());
  int j = 0;
  int i = 0;
  int ans = 0;
  
  while( i < n && j < k)
  {
    if( (n-v[j]) > i)
    {
      i += v[j];
      j++;
      ans++;
    }
    else 
    {
      break;
    }
  }
  cout << ans << "\n";
}



return 0;
}
