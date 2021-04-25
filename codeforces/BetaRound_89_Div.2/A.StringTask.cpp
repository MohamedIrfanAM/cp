// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/118/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
string s;
cin >> s;

for (int i = 0; i < s.length(); ++i) 
{
  if(s[i] == 'y' || s[i] == 'Y' || s[i] == 'O' ||s[i] == 'o' ||s[i] == 'a' ||s[i] == 'A' ||s[i] == 'e' ||s[i] == 'E' ||s[i] == 'i' ||s[i] == 'I' ||s[i] == 'u' ||s[i] == 'U' )
  {
    s.erase(s.begin()+i);
    i-=1;
  }
}

int n = 2*s.length();
for (int i = 0; i < n; i+=2) {
    s[i] = tolower(s[i]);
  s.insert(s.begin()+i,'.');
}
cout << s;


return 0;
}
