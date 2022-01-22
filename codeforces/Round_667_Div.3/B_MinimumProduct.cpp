// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1409/B
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
  int a,b,x,y,n;
  cin >> a >> b >> x >> y >> n;

  long long int result1,result2;
  int A = a;
  int B = b;
  int N = n;
  A -= min(n,a-x);
  N -= min(n,a-x);
  B -= min(N,b-y);
  result1 = 1LL*A*B;

  A = a;
  B = b;
  N = n;

  B -= min(n,b-y);
  N -= min(n,b-y);
  A -= min(N,a-x);
  result2 = 1LL*A*B;
  cout << min(result1,result2) << "\n";
  
}

return 0;
}
