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
  int a,b;
  cin >> a >> b;


  if((a+b)%2 == 0)
  {
    cout << (a+b)/2 << "\n";
  }
  else
  {
    cout << -1 << "\n";
  }
}

return 0;
}
