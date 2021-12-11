// time-limit: 1000
// problem-url: https://codeforces.com/contest/1608/problem/B
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t;
cin >> t;
while(t--)
{
  int n,a,b;
  cin >> n >> a >> b;

  if(a > n/2 || b> n/2)
  {
    cout << "-1\n";
  }
  else if((a+b) > (n-2))
  {
    cout << "-1\n";
  }

}



return 0;
}
