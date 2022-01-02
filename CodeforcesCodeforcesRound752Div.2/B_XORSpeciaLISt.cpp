// time-limit: 1000
// problem-url: https://codeforces.com/contest/1604/problem/B
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
  if( n%2 == 0)
  {
    cout << "YES\n";
    continue;
  }
  
  int found = false;
  for(int i = 1; i < n; i++) 
  {
      if(arr[i] <= arr[i-1])
      {
        found = true;
      }
  }
  if(found)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }
  
}



return 0;
}
