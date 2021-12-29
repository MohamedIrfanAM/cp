// time-limit: 1000
// problem-url: https://codeforces.com/contest/1623/problem/B
#include<bits/stdc++.h>

using namespace std;

bool compare(pair<int,int> a, pair<int,int> b)
{
  return ((abs(a.first - a.second)) > (abs(b.first - b.second)));
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  vector<pair<int,int>> v;  
  int n;
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    int x,y;
    cin >> x >> y;
    v.push_back({x,y});
  }
  sort(v.begin(),v.end(),compare);

  for(int i = 0; i < n; i++)
  {
    pair<int,int> a = v[i];
    if(a.first == a.second)
    {
      cout << a.first << " " << a.second << " " << a.second << "\n";
      continue;
    }
    for(int d = a.first; d <= a.second; d++)
    {
      int l = -1,r = -1 ;
      int gencount = 0;
      if(d-1 >= a.first)
      {
        l = d-1;
        gencount++;
      }
      if(d+1 <= a.second)
      {
        r = d+1;
        gencount++;
      }

      bool found = false;
      int foundcount = 0;
      for(int j = i+1; j < n;j++)
      {
        pair<int,int> b = v[j];
        if(b.first == a.first && b.second == l)
        {
          foundcount++;
        }
        if( b.first == r && b.second == a.second)
        {
          foundcount++;
        }

        if(gencount == foundcount)
        {
          cout << a.first << " " << a.second << ' ' << d << "\n";
          found = true;
          break;
        }
      }
      if(found) break;
    }
  }
}



return 0;
}
