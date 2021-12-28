// time-limit: 1000
// problem-url: https://codeforces.com/contest/1614/problem/B
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
  vector<pair<int,int>> v;
  
  for(int i = 0; i < n; i++) 
  {
    int x;
    cin >> x;
    v.push_back({x,i});
  }
  
  sort(v.rbegin(),v.rend());

  vector<int> ans(n);

  float diff = 1;
  int i = 0;
  long long T = 0;
  
  for(auto it = v.begin(); it != v.end(); it++)
  {
    ans[it->second] += (pow(-1,i)*floor(diff));
    T += 1LL*2*floor(diff)*(it->first);
    diff+=0.5;
    i++;
  }

  cout << T << "\n";
  cout << 0 << " ";

  for(int i = 0; i < n; i++)
  {
    cout << ans[i];
    if(i != n-1)
    {
      cout << ' ';
    }
  }
  cout << "\n";
  
}



return 0;
}
