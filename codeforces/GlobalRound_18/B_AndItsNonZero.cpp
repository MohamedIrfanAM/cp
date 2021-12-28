// time-limit: 2000
// problem-url: https://codeforces.com/contest/1615/problem/B
#include <algorithm>
#include<bits/stdc++.h>
#define cout_red cout << "\033[48;5;196m\033[38;5;15m" 
#define endl_red "\033[0m" << endl; 
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
  int l,r;
  cin >> l >> r;

  vector<int> count;

  int last = l;
  for(int i = 0; i < 30;i++)
  {
    int num = 1<<i;
    if(num < l)
    {
      continue;
    }
    else if( num >= l && num <= r)
    {
      count.push_back(num-last);
      last = num;
    }
    else if( num > r)
    {
      count.push_back(r-last);
      break;
    }
  }
  cout << (r-l+1) - *max_element(count.begin(),count.end()) << "\n";
    cout_red << "Hai" << endl_red;
}



return 0;
}
