// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/133/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

string p;
cin >> p;

for(int i = 0 ; i < p.length(); i++)
{
  if(p[i] == 'H' ||p[i] == 'Q' ||p[i] == '9' )
  {
    cout << "YES";
    exit(0);
  }
}
cout << "NO";


return 0;
}
