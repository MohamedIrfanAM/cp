// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1401/B
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
  int x1,y1,z1,x2,y2,z2;
  cin >> x1 >> y1 >> z1 ;
  cin >> x2 >> y2 >> z2 ;

  int sum = 0;
  
  sum += 2*min(z1,y2);
  int change = min(z1,y2);
  z1 -= change;
  y2 -= change;

  change =min(y1,y2); 
  y1 -= change;
  y2 -= change;
  
  change = min(y1,x2);
  y1 -= change;
  x2 -= change;

  change = min(x1,z2);
  x1 -= change;
  z2 -= change;

  change = min(z1,z2);
  z1 -= change;
  z2 -= change;
  
  sum -= 2*min(y1,z2);
  cout << sum << "\n";
}

return 0;
}
