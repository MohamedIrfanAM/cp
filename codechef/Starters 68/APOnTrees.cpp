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
int count = 0;
while(tst--)
{
  int a,b;
  cin >> a >> b;
  count += a-b;

  
}
  if(count == 0)
  {
    cout << "NEUTRAL" << "\n";
  }
  else if(count > 0)
  {
    cout << "PROFIT" << "\n";
  }
  else if(count < 0) 
  {
    cout << "LOSS" << "\n";
  }

return 0;
}
