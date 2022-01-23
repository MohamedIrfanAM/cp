// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1360/C
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
  vector<int> v(n);
  int oddcount = 0,evencount=0;
  for(auto &x : v)
  {
    cin >> x;
    if(x&1) oddcount++;
    else evencount++;
  }
  int pairs = ((evencount/2) + (oddcount/2));
  if( 2*pairs == n)
  {
    cout << "YES\n";
    continue;
  }
  
  int diff = (n/2) - pairs;
  sort(v.begin(),v.end());
  int adjacent_pairs = 0;
  vector<bool> used(n);
  for(int i = 0; i+1 < n; i++)
  {
    if(v[i+1]-v[i] == 1)
    {
      if( (v[i]&1 && !(v[i+1]&1)) || (!(v[i]&1) && v[i+1]&1))
      {
        if(diff)
        {
          used[i] = true;
          used[i+1] = true;
          adjacent_pairs++;
          diff--;
          i++;
        }
      }
      if(!diff)
      {
        break;
      }
    }
  }
  evencount = 0,oddcount =0;
  for(int i = 0; i < n; i++)
  {
    if(!used[i])
    {
      if(v[i]&1) oddcount++;
      else evencount++;
    }
  }
  pairs = (evencount/2) + (oddcount/2); 
  
  if(pairs+adjacent_pairs == n/2)
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
