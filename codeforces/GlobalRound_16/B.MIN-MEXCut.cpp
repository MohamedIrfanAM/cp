// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1566/B
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
  string s;
  cin >> s;

  int one = 0, zero = 0;

  for (int i = 0; i < s.length(); i++)
  {
    if(s[i] == '1') 
    {
      one++;
    }
    else if(s[i] == '0') 
    {
      zero++;
    }
  }
  if(one == 0)
  {
    cout << 1 << "\n";
  }
  else if(zero == 0)
  {
    cout << 0 << "\n";
  }
  else
  {
    vector<int> pos;
    for(int i = 0; i < s.length(); i++)
    {
      if(s[i] == '0')
      {
        pos.push_back(i);
      }
    }
    int count = 0;
    for(int i = 1; i < pos.size(); i++)
    {
      if((pos[i] - pos[i-1]) > 1)
      {
        count++;
      }
      if(count+1 >= 2)
      {
        break;
      }
    }
    cout << min(count+1,2) << "\n";
  }
}



return 0;
}
