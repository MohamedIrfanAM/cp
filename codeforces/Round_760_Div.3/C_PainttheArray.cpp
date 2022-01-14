// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1618/C
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
  vector<long long int> A(n);
  for (int i = 0; i < n; i++)
  {
    cin >> A[i]; 
  }
  long long int G1 = A[0],G2 = A[1];
  for (int i = 0; i < n; i++)
  {
    if(i%2 == 0)
    {
      G1 = __gcd(G1,A[i]);
    }
    else
    {
      G2 = __gcd(G2,A[i]);
    }
  }

  bool ok = true;
  for(int i = 0; i < n; i+=2)
  {
    if(A[i]%G2 == 0)
    {
      ok = false;
      break;
    }
  }
  if(ok)
  {
    cout << G2 << "\n";
  }
  else
  {
    ok = true;
    for(int i = 1; i < n; i+=2)
    {
      if(A[i]%G1 == 0)
      {
        ok = false;
        break;
      }
    }
    if(ok) cout << G1 << "\n";
    else cout << "0\n";
  }
}

return 0;
}
