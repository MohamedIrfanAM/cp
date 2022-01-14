// time-limit: 3000
// problem-url: https://codeforces.com/contest/1624/problem/C
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
  vector <bool> used(n,false);
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  
  sort(arr.begin(),arr.end());
  bool ok = true;
  for(int i = 0; i < n; i++)
  {
    while(arr[i] > 0 && arr[i] > n || used[arr[i]])
      arr[i] /= 2;

    if(arr[i] == 0) 
    {
      ok = false;
      break;
    }
    else if(!used[arr[i]])
    {
      used[arr[i]] = true;
    }
  }
  cout << (ok ? "YES\n" : "NO\n");
  
  
}

return 0;
}
