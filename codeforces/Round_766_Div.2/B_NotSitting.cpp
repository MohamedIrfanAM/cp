// time-limit: 1000
// problem-url: https://codeforces.com/contest/1627/problem/B
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
  int n,m;
  cin >> n >> m;
  
  auto max_distance = [n,m](int a,int b) -> int
  {
    int d1 = a+b;
    int d2 = abs(a-(n-1)) + b;
    int d3 = abs(b-(m-1)) + a;
    int d4 = abs(b-(m-1)) + abs(a-(n-1)) ;
    return max(max(d1,d2),max(d3,d4));
  };

  vector<int> ans;
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < m;j++)
    {
      ans.push_back(max_distance(i,j)); 
    }
  }
  
  sort(ans.begin(),ans.end());

  for(auto &a: ans)
  {
    cout << a << " ";
  }
  cout << "\n";
}

return 0;
}
