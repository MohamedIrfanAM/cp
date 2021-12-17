// time-limit: 2000
// problem-url: https://codeforces.com/contest/1536/problem/A
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t;
cin >> t;
while(t--)
{
  int n;
  cin >> n;
  vector<int> v(n);
  bool no = false ;
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
    if(v[i] < 0)
    {
      no = true;
    }

  }
  if(no)
  {
    cout << "NO\n";
    continue;
  }
  
  cout << "YES\n101\n";
  for(int i = 0; i <= 100; i++)
  {
    cout << i << " ";
  }
  cout << "\n";
}



return 0;
}
