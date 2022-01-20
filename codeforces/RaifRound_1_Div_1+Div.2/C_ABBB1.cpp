// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1428/C
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
  cin >>  s;
  
  int len = s.size();
  string s1 = s;
  while(len--)
  {
    s = s1;
    s1.clear();
    for(int i =0; i < s.size(); i++) 
    {
      string substring = "NN";
      if(i+1 < s.length())
      {
        substring.clear();
        substring.push_back(s[i]);
        substring.push_back(s[i+1]);
      }

      if(substring == "AB" || substring == "BB")
      {
        i++;
      }
      else
      {
        s1.push_back(s[i]);
      }
    }
    if(s1.length() == 0 || s.length() == s1.length())
    {
      break;
    }
  }
  cout << s1.length() << "\n";
}

return 0;
}
