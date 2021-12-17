// time-limit: 2000
// problem-url: https://codeforces.com/contest/1536/problem/B
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t;
cin >> t;
while(t--)
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> hsh(26,0);

  for(int i = 0; i < n;i++)
  {
    hsh[s[i]-'a']++;
  }

  bool found = false;

  for(int i = 0; i < 26;i++)
  {
    if(hsh[i] == 0)
    {
      cout << char(i+'a') << "\n";
      found = true;
      break;
    }
  }

  if(found)
  {
    continue;
  }
 
  char a = 'a';
  char b = 'a';
  found = false;

  for(int i = 0; i < 26; i++)
  {
    char a = char(i+'a'); 
    for(int j = 0; j < 26; j++)
   {
      char b = char(j+'a');
      for(int k = 0; k < n-1; k++)
      {
        if(s[k] == a && s[k+1] == b)
        {
          break;
        }
        else if( k == (n-2) )
        {
          found = true;
          break;
        }
      }
      if(found)
      {
        break;
      }
   }   
    if(found)
    {
      break;
    }
  }
  
  if(found)
  {
    cout << a << b << "\n";
  }
}



return 0;
}
