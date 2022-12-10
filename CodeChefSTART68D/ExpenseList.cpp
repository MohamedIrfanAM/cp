// time-limit: 1000
// problem-url: https://www.codechef.com/START68D/problems/EXPENSES
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
  int x,n;
  cin >> n >> x;
  cout << pow(2,(x-n)) << "\n";   
}

return 0;
}
