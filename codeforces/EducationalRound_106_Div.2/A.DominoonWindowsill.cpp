// time-limit: 1000
// problem-url: https://codeforces.com/contest/1499/problem/A
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
  int n,k1,k2;
  int w,b;
  cin >> n >> k1 >> k2;
  cin >> w >> b;

  int hwhite = min(k1,k2);
  int vwhite = floor((max(k1,k2)-hwhite)/2); 
  if(hwhite+vwhite < w)
  {
    cout << "NO\n";
  }
  else
  {

    int hblack = min((n-k1),(n-k2));
    int vblack = floor((max((n-k1),(n-k2))-hblack)/2);

    if(vblack+hblack < b)
    {
      cout << "NO\n";
    }
    else
    {
      cout << "YES\n";
    }

  }
}

return 0;
}
