// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1530/C
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
  vector<int> a(n);
  vector<int> b(n);
  vector<int> A(101,0);
  vector<int> B(101,0);
  for(auto &x : a)
  {
    cin >> x;
    A[x]++;
  }
  for(auto &x : b)
  {
    cin >> x;
    B[x]++;
  }
  
  
  int ans = 0;
  for(int i = n; i <= 2*n; i++)
  {
    int ka = i - (i/4);
    int kb = ka; 
    int asum = 0,bsum = 0;
    asum = 100*(i-n);
    ka -= i-n;

    for(int j = 100; j >= 0 && ka > 0; j--)
    {
      asum += min(ka,A[j])*j;
      ka -= min(ka,A[j]);
    }

    for(int j = 100; j >= 0 && kb > 0 ; j--)
    {
      bsum += min(kb,B[j])*j;
      kb -= min(kb,B[j]);
    }
    if(asum >= bsum)
    {
      ans = i-n; 
      break;
    }
  }
  cout << ans << "\n";

}

return 0;
}
