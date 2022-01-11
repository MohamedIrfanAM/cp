// time-limit: 2000
// problem-url: https://codeforces.com/contest/1624/problem/A
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
  int n;
  cin >> n;
  int min = INT_MAX,max = 0;
  for(int i = 0; i < n; i++) 
  {
    int x;
    cin >> x;
    if( x > max ) max = x;
    if( x < min) min = x;
  }
  cout << max - min  << "\n";
  
}



return 0;
}
