// time-limit: 2000
// problem-url: https://codeforces.com/contest/1520/problem/D
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int t; 
cin >> t;
while(t--)
{
  int n;
  cin >> n;
  map <int,int> a;
  long long  c = 0;
  for(int i = 0; i < n; i++)
  {
    int x ;
    cin >> x;
    x -= i;
    c += a[x];
    a[x]++;
  }

  cout << c << "\n";

}


return 0;
}
