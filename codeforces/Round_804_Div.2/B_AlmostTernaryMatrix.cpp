// time-limit: 1000
// problem-url: https://codeforces.com/contest/1699/problem/B
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
  int n,m;
  cin >> n >> m;

  for(int i = 0; i < n; i++)
  {
    string choosen;
    if((i+1)%4 == 0 || (i)%4 == 0)
    {
      choosen = "1001";
    }
    else
    {
      choosen = "0110";
    }
    for(int j = 0; j < m; j++)
    {
      cout << choosen[j%4] << " "; 
    }
    cout << "\n";
  }
}

return 0;
}
