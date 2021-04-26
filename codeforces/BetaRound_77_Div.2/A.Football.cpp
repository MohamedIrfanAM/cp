// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/96/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

string s;
cin >> s;

if(s.length() <= 7)
{
  cout << "NO";
  exit(0);
}

int one = count(s.begin(),s.end(),'1');
int zero = count(s.begin(),s.end(),'0');

if(one < 7 && zero < 7)
{
  cout << "NO";
  exit(0);
}


for (int i = 0; i < s.length(); ++i) {
  
  if(s[i] == '0' && zero >= 7 && s.length()-1-i >=6)
  {
    int zeroc = 0;
    for (int j = i+1; j < i+1+7; ++j) {
      if(s[j] != '0' )
      {
        break;
      }
       zeroc++; 
      if(zeroc == 6 &&s[j] == '0')
      {
        cout << "YES";
        exit(0);
      }
    }
  }
  else if(s[i] == '1' && one >= 7 && s.length()-1-i >=6)
  {
    int onec = 0;
    for (int j = i+1; j < i+1+7; ++j) {
      if(s[j] != '1' )
      {
        break;
      }
      onec++;
      if(onec == 6 &&s[j] == '1')
      {
        cout << "YES";
        exit(0);
      }
    }
  }   
}
cout << "NO";
return 0;
}
