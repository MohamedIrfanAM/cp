// time-limit: 1000
// problem-url: https://www.codechef.com/START68D/problems/BORSTR
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
  string s;
  cin >> n;
  cin >> s;

  map <char,vector<int>> m;

  for(int j = 97; j <= 122; j++)
  {
    char c = j;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
      if( s[i] == c)
      {
        count++;
      }
      else if(count > 0)
      {
        m[c].push_back(count);
        count = 0;
      }
    }

    if(count > 0)
    {
      m[c].push_back(count);
    }
    
  }

  int Max = 0;

  for(auto p : m)
  {
    int max1 = 0;
    int max2 = 0;
    vector<int> l = p.second;
    sort(l.begin(),l.end());
    if(l.size() >= 2)
    {
      max1 = min(l.back(),l[l.size()-2]);
    }
    max2 = l.back()-1;

    if(max(max1,max2) > Max)
    {
      Max = max(max1,max2);
    }
  }
  cout << Max << "\n";

}

return 0;
}
