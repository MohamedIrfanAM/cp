// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1415/B?csrf_token=8a4797b5e55a83abe9d9788871e1ce8b
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
  int n,k;
  cin >> n >> k;
  vector<int> v(n);
  unordered_set<int> s;

  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
    s.insert(v[i]);
  }

  int min_count = INT_MAX;
  for(auto &c : s)
  {
    int count = 0;
    for(int i = 0 ; i < n; i++)
    {
      if(v[i] != c)
      {
        count++;
        i += k-1;
      }
    }
    if(count < min_count) min_count = count;
  }
  cout << min_count << "\n";
}

return 0;
}
