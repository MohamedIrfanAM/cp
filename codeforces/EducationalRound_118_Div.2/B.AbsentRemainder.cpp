// time-limit: 2000
// problem-url: https://codeforces.com/contest/1613/problem/B
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
  vector<int> arr(n);

  map <int,int> hsh;

  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
    hsh[arr[i]]++;
  }
  sort(arr.begin(),arr.end());
  vector<pair<int,int>> ans;

  for(int i = 0; i < n; i++)
  {
    for(int j = i+1; j < n; j++)
    {
      int num = arr[j]%arr[i];
      if(hsh[num] == 0)
      {
        ans.push_back({arr[j],arr[i]});
      }
      if(ans.size() >= n/2)
      {
        break;
      }
    }
    if(ans.size() >= n/2)
    {
      break;
    }
  }

  for(int i = 0; i < n/2; i++)
  {
    cout << ans[i].first << " " << ans[i].second << "\n";
  }
}



return 0;
}
