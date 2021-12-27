// time-limit: 2000
// problem-url: https://codeforces.com/contest/1605/problem/B
#include<bits/stdc++.h>
#define coutc cout << "\033[48;5;196m\033[38;5;15m" 
#define endlc "\033[0m" << endl; 

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
  cin >> n;
  string s;
  cin >> s;


  if(is_sorted(s.begin(),s.end()))
  {
    cout << "0\n";
    continue;
  }
  else
  {
    cout << 1 << "\n";
  }
  
  int k = 0,l = 0, r = n-1;
  vector<int> ans;
  
  while( l < r )
  {
    if(s[r] == '0' && s[l] == '1')
    {
      k+=2;
      ans.push_back(l+1);
      ans.push_back(r+1);
      r--;
      l++;
    }
    else if( s[r] == '1' && s[l] == '1')
    {
      r--;
    }
    else if(s[r] == '0' && s[l] == '0')
    {
      l++;
    }
    else if( s[r] == '1' && s[l] == '0')
    {
      l++;
      r--;
    }
  }
  cout << k << " ";

  sort(ans.begin(),ans.end());
  for(int i = 0; i < k; i++)
  {
    cout << ans[i];
    if( i != k-1)
    {
      cout << " " ;
    }
  }
  cout << "\n";
}

return 0;
}
