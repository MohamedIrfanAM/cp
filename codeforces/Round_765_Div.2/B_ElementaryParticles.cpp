// time-limit: 2000
// problem-url: https://codeforces.com/contest/1625/problem/B
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
  int n; cin >> n;
  vector<int> v(150010,-1);
  vector<int> ans;

  for(int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if(v[x] != -1) 
      ans.push_back(i-v[x]);
    v[x] = i;
  }
  if(ans.size() == 0)
  {
    cout << "-1\n";
  }
  else
  {
    cout << n - *min_element(ans.begin(),ans.end()) << "\n";
  }
  
}

return 0;
}
