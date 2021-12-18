// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1562/A
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
  int l , r;
  cin >> l >> r;

  if( l == r )
  {
    cout << "0\n";
    continue;
  }

  int mid = (r/2)+1;
  
  if(l > mid)
  {
    cout << r%l << '\n';
  }
  else
  {
    cout << r%mid << "\n";
  }

}



return 0;
}
