// time-limit: 1000
// problem-url: https://codeforces.com/contest/1742/problem/C
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
  vector<vector<char>> v(8);
  for(int i = 0; i < 8; i++) 
  {
    for(int j = 0; j < 8; j++) 
    {
      char x;
      cin >> x;
      v[i].push_back(x);
    }
  } 

  char ans = 'x';

  for(int i = 0; i < 8; i++) 
  {
    char c;
    for(int j = 0; j < 8; j++) 
    {
      if(j == 0 && v[i][j] != '.')
      {
        c = v[i][j];
      }
      else if( v[i][j] == c)
      {
        if(j == 7)
        {
          ans = c;
        }
        else
        {
          continue;
        }
      }
      else
      {
        break;
      }
    }
  } 

  if(ans != 'x')
  {
    cout << ans << "\n";
    continue;
  }


  for(int i = 0; i < 8; i++) 
  {
    char c;
    for(int j = 0; j < 8; j++) 
    {
      if(j == 0 && v[j][i] != '.')
      {
        c = v[j][i];
      }
      else if( v[j][i] == c && v[j][i] != '.')
      {
        if(i == 7)
        {
          ans = c;
        }
        else
        {
          continue;
        }
      }
      else
      {
        break;
      }
    }
  } 

  cout << ans << "\n";

}

return 0;
}
