// time-limit: 2000
// problem-url: https://codeforces.com/contest/1700/problem/B
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
  int n;
  string num;
  cin >> n >> num;
  bool borrow = false;
  string ans = "";

  if(num[n-1] != 1) 
  {
    borrow = true;
    char lastdigit = (59-num[n-1])+48;
    ans += lastdigit;
  }
  else ans += '0';

  for(auto digit = num.rbegin()+1; digit != num.rend(); digit++)
  {
    int currdigit = *digit+borrow;
    if(currdigit == 48) 
    {
      ans += '0';   
      borrow = false;
    }
    else
    {
      char lastdigit = (58-currdigit)+48;
      ans += lastdigit;
      borrow = true;
    }
  }
  
  for(int i = n-1; i >= 0; i--)
  {
    cout << ans[i];
  }
  cout << "\n";
}

return 0;
}
