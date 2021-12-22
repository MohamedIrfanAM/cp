// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1547/B
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
  map<char,int> m;

  string s1 = s;
  sort(s1.begin(),s1.end());

  int len = s1[s.length()-1] - 'a' + 1;

  if(len != s.length())
  {
    cout << "NO\n";
    continue;
  }

  for(int i = 0; i < s.length(); i++)
  {
    m[s[i]] = i; 
  }


  int NO = false;
  map<char,int> count;
  for(int i = 0; i < s.length(); i++) 
  {
    count[s[i]]++;
    if(count[s[i]] > 1)
    {
      cout << "NO\n";
      NO = true;
      break;
    }
  }
  if(NO)
  {
    continue;
  }
  else
  {
    NO = false;
    for(auto &element: count)
    {
      if(element.second == 1 )
      {
        continue;
      }
      else
      {
          cout << "NO\n";
          NO = true;
          break;
      }
    }
    if(NO)
    {
      continue;
    }
  }

  int no = false;
  for(int i = 1; i < s.length(); i++)
  {
    int d = abs(m[char(i+'a')]-m[char(i-1+'a')]);
    if(d == 1 || d == i)
    {
      continue;
    }
    else
    {
      cout << "NO\n";
      no = true;
      break;
    }
  }
  if(!no)
  {
    cout << "YES\n";
  }

}



return 0;
}
