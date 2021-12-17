// time-limit: 1500
// problem-url: https://codeforces.com/problemset/problem/1534/A
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
  vector<string> v;
  
  int n,m;
  cin >> n >> m;
  for(int i = 0; i < n; i++)
  {
    string x;
    cin >> x;
    v.push_back(x);
  }
  
  vector<string> v1 = v;

  char color = 'W';
  bool no = false;
  bool getout = false;


  if(v[0][0] == 'W' || v[0][0] == '.')
  {
    for(int i = 0; i < n; i++)
    {
        if( i != 0 )
        {
          if(v[i-1][0] == 'W')
          {
            color = 'R';
          }
          else
          {
            color = 'W';
          }
        }
      for(int j = 0; j < m; j++)
      {
        if(v[i][j] == color || v[i][j] == '.')
        {
          v[i][j] = color;
          if(color == 'W')
          {
            color = 'R';
          }
          else
          {
            color = 'W';
          }
          continue;
        }
        else
        {
          getout = true; 
          break;
        }
      }
      if(getout)
      {
        break;
      }
    }
  }

  if(getout)
  {
    if(v1[0][0] == 'R' || v1[0][0] == '.')
    {
      color = 'R';
      for(int i = 0; i < n; i++)
      {
        if( i != 0 )
        {
          if(v1[i-1][0] == 'W')
          {
            color = 'R';
          }
          else
          {
            color = 'W';
          }
        }
        for(int j = 0; j < m; j++)
        {
          if(v1[i][j] == color || v1[i][j] == '.')
          {
            v1[i][j] = color;
            if(color == 'W')
            {
              color = 'R';
            }
            else
            {
              color = 'W';
            }
            continue;
          }
          else
          {
            no = true;
            break;
          }
        }
        if(no)
        {
          break;
        }
      }
    }
    if(!no)
    {
      cout << "YES\n";
      for(int i = 0; i < n;i++)
      {
        cout << v1[i] << "\n";
      }
    }
    else
    {
      cout << "NO\n";
    }
  }
  else
  {
      cout << "YES\n";
      for(int i = 0; i < n;i++)
      {
        cout << v[i] << "\n";
      }
  }


}



return 0;
}
