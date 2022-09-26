// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1674/D
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
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  vector<int> sorted = arr; 
  sort(sorted.begin(),sorted.end());
  if(n%2 != 0 && sorted[0] != arr[0])
  {
    cout << "NO\n";
    continue;
  }
  bool ok = true;

  for(int i = n-1; i > (n%2); i -= 2)
  {
    // cout << arr[i] << " " << sorted[i] << "\n";
    if((arr[i] == sorted[i] && arr[i-1] == sorted[i-1]) || (arr[i] == sorted[i-1] &&  arr[i-1] == sorted[i]))
    {
      continue;
    }
    else
    {
      ok = false;
      break;
    }
  }
  if(ok) cout << "YES\n";
  else cout << "NO\n";

}

return 0;
}
