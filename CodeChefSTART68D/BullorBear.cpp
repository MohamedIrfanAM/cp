// time-limit: 2000
// problem-url: https://www.codechef.com/START68D/problems/APTREE
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
  int p = a-b;

  if(p == 0) 
  {
    cout << "NEUTRAL" << "\n";
  }
  else if(p < 0)
  {
    cout << "PROFIT" << "\n";
  }
  else 
  {
    cout << "LOSS" << "\n";
  }
  
}

return 0;
}

