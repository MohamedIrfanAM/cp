// time-limit: 1000
// problem-url: https://codeforces.com/contest/1775/problem/0
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
  bool found = 0;

  // if(s[0] != s.back() && s[1] == 'a')
  // {
  //   bool b_found = false;
  //   for(int i = 1; i < s.length()-1 ; i++)
  //   {
  //     if(s[i] == 'b')
  //     {
  //       b_found = true;
  //       break;
  //     }
  //   }
  //   if(!b_found)
  //   {
  //     cout << ":(\n";
  //     continue;
  //   }
  // }


  for(int i = 1; i < s.length()-1; i++)
  {
    if(s[i] == 'a')
    {
      for(int j = 0; j < i; j++)
      {
        cout << s[j];
      }
      cout << " a ";
      for(int j = i+1; j < s.length(); j++)
      {
        cout << s[j];
      }
      cout << "\n";
      found = true;
      break;
    } 
  }

  if(!found)
  {
    cout << s[0] << " ";
    for(int j = 1; j < s.length()-1; j++)
    {
      cout << s[j];
    }
    cout << " ";
    cout << s[s.length()-1] << "\n";
  }

}

return 0;
}
