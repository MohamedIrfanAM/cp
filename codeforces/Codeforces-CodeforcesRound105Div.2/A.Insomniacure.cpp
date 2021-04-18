// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/148/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int k,l,m,n,d;
cin >> k;
cin >> l;
cin >> m;
cin >> n;
cin >> d;
int dam = 0;


for(int i =1; i <= d; i++)
{
  if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0)
  {
    dam++;
  }
}
cout << dam;

return 0;
}
