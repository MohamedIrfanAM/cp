// time-limit: 1000
// problem-url: https://codeforces.com/contest/1627/problem/0
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
  int n,m,r,c;
  cin >> n >> m >> r >> c;
  int blackcount = 0;
  vector<string> v;

  for(int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    v.push_back(s);
  }

  if(v[r-1][c-1] == 'B')
  {
    cout << 0 << "\n";
    continue;
  }
  
  bool exist = false;
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
   {
      if( v[i][j] == 'B') 
      {
        blackcount++;
        if(i == r-1 || j== c-1)
        {
          exist = true;
          break;
        }
      }
    }
    if(exist) break;
  }

  if(!blackcount)
  {
    cout << "-1\n";
  }
  else if(exist)
  {
    cout << "1\n";
  }
  else 
  {
    cout << "2\n";
  }
  
}

return 0;
}
