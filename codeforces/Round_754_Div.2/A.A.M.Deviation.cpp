// time-limit: 1000
// problem-url: https://codeforces.com/contest/1605/problem/A
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
  int a,b,c;
  cin >> a >> b >> c;

  cout << min((abs((a+c)-(2*b)))%3,1)  << "\n";
}


return 0;
}
