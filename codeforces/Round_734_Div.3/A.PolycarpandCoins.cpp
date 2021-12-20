// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1551/A
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
  int sum;
  cin >> sum;
  int mid = sum/3;
  int diff = sum%3;

  if(diff == 0)
  {
    cout << mid << " " << mid << "\n";
  }
  else if( diff == 1 )
  {
    cout << mid+1 << " " << mid << "\n";
  }
  else
  {
    cout << mid << " " << mid+1 << '\n';
  }
}



return 0;
}
