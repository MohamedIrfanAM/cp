// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1574/B
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
  int a,b,c,m;
  cin >> a >> b >> c >> m;
  int A = a-1;
  int B = b-1;
  int C = c-1;
  int pairs = A+B+C;

  vector<int> v = {a,b,c};
  sort(v.begin(),v.end());
   
  if( pairs < m)
  {
    cout << "NO\n";
  }
  else if( pairs == m)
  {
    cout << "YES\n";
  }
  else 
  {
    pairs -= v[0];
    pairs -= v[0]-1;

    if(pairs <= m)
    {
      cout << "YES\n";
      continue;
    }

    pairs -= v[1];
    pairs -= v[1]-1;

    if(pairs <= m)
    {
      cout << "YES\n";
      continue;
    }
    else
    {
      cout << "NO\n";
    }
     
    
  }
}

return 0;
}
