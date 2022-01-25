// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1539/C
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
  long long int n,k,x;
  cin >> n >> k >> x;

  vector<long long int> v(n);
  for(auto &X : v)
  {
    cin >> X;
  }

  vector<long long int> gap;
  sort(v.begin(),v.end());
  for(int i = 0; i+1 < n; i++)
  {
    long long int diff = v[i+1] - v[i];
    if(diff > x)
    {
      gap.push_back(diff-1);
    }
  }
  
  sort(gap.begin(),gap.end());
  long long int ans= 1;
  
  for(auto &i : gap)
  {
    if(i+1 > x && i/x <= k)
    {
      k -= i/x;
    }
    else
    {
      ans++;
    }
  }
  cout << ans << "\n";
}

return 0;
}
