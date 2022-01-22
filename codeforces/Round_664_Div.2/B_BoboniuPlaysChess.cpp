// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1395/B
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int tst = 1;
while(tst--)
{
  int n,m,s1,s2;
  cin >> n >> m >> s1 >> s2 ;
  int R = s1,C = s2;

  cout << R << " " << C << "\n";
  while( C > 1)
  {
    C--;
    cout << R << " " << C << "\n";
  }

  while(R > 1)
  {
    R--;
    cout << R << " " << C << "\n";
  }

  R = s1;
  while( R < n)
  {
    R++;
    cout << R << " " << C << "\n";
  }

  while(R < n || C < m)
  {
    if( R == n)
    {
      if( C+1 <= m)
        C++;
      else
        break;
      cout << R << " " << C << "\n";
      while( R > 1)
      {
        R--;  
        if( R != s1 || C > s2)
        {
          cout << R << " " << C << "\n";
        }
      }
    }

    if( R == 1)
    {
      if(C+1 <= m)
        C++;
      else
        break;
      cout << R << " " << C << "\n";
      while(R < n)
      {
        R++;
        if( R != s1 || C > s2)
        {
          cout << R <<  " " << C << "\n";
        }
      }
    }
  }
}

return 0;
}
