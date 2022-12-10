// time-limit: 2000
// problem-url: https://codeforces.com/contest/1760/problem/D
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

  vector<int> v;
  
  for(int i = 0; i < n; i++)
  {
    int x;
    cin >> x;

    if(i > 0)
    {
      if(x != v.back() )
        v.push_back(x);
    }
    else
    {
      v.push_back(x);
    }
  }
  n = v.size();

  if(n == 1 )
  {
    cout << "YES\n";
    continue;
  }
  
  int count = 0;
  
  for(int i = 0; i < n; i++)
  {
    if( i == 0)
    {
      if(v[0] < v[1])
      {
        count++;
      }
    }
    else if( i == n-1)
    {
      if(v[i] < v[i-1])
      {
        count++;
      }
    }
    else if(v[i] < v[i-1] && v[i] < v[i+1])
    {
      count++;
    }
  }

  if(count == 1)
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
