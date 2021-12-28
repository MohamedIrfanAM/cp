// time-limit: 2000
// problem-url: https://codeforces.com/contest/1622/problem/B
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
  map<int,int>m;  
  int n;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    m[x] = i;
  }
  string s;
  cin >> s;
  
  int c1 = 0;
  for(int i = 0; i < n; i++) 
  {
    if(s[i] == '1')
    {
      c1++;
    }
  }

  int liked = n;
  int disliked = n-c1;


  vector <int>ans(n);
  for( auto it = m.rbegin(); it != m.rend(); it++)
  {
    if(s[it->second] == '1')
    {
      ans[it->second] = liked;
      liked--;
    }
    else if(s[it->second] == '0')
    {
      ans[it->second] = disliked;
      disliked--;
    }
  }

  for(int i = 0; i < n; i++) 
  {
    cout << ans[i];
    if(i != n-1)
    {
      cout << " ";
    }
  }
  
  
  cout << "\n";

   
}



return 0;
}
