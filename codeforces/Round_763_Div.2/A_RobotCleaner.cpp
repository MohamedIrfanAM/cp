// time-limit: 1000
// problem-url: https://codeforces.com/contest/1623/problem/A
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
  int n,m,rb,cb,rd,cd;
  
  cin >> n >> m >> rb >> cb >> rd >> cd;
  int rdistance,cdistance;
  if(rb <= rd)
  {
    rdistance = rd -rb;
  }
  else
  {
    rdistance = n - rb + n - rd;
  }

  if(cb <= cd)
  {
    cdistance = cd-cb;
  }
  else
  {
    cdistance = m - cb + m - cd;
  }

  cout << min(cdistance,rdistance) << "\n";

}



return 0;
}
