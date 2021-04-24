// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/58/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

string  s;
cin >> s;

for (int i = 0; i < s.length(); ++i) 
{
  if(s[i] == 'h')
  {
    for(int j = i+1; j < s.length() ; j++)
    {
      if(j != s.length() -1 &&s[j] == 'e')
      {
        int c = 0;
        for (int k = j+1; k < s.length(); ++k) {
          if(s[k] == 'l')
          {
            c++;
            if( c == 2 )
            {
              for (int x = k+1; x < s.length(); ++x) {
               if(s[x] == 'o') 
               {
                 cout << "YES";
                 exit(0);
               }
              }
            }
          }
        }
      }
    }
  }
}
cout << "NO";

return 0;

}
