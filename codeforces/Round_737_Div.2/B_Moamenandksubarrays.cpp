// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1557/B
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
  vector<pair<int,int>> v(n);
  for(int i = 0; i< n; i++)
  {
    cin >> v[i].first;
    v[i].second = i;
  }

  sort(v.begin(),v.end());

  int count = 1;

  for(int i = 1; i < n; i++)
  {
    if(v[i-1].second+1 != v[i].second)
    {
      count++;
    }
  }
  
  if(count <= k)
  {
    cout<< "Yes\n";
  }
  else cout << "No\n";


}

return 0;
}
