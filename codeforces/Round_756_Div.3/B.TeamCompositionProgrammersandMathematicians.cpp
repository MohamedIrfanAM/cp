// time-limit: 1000
// problem-url: https://codeforces.com/contest/1611/problem/B
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t; 
cin >>t;

while(t--)
{
  int a,b;
  cin >> a >> b;

  cout << min(min(a,b),(a+b)/4) << "\n";

  
}


return 0;
}
