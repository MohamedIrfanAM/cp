// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1582/C
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
  cin >> n;
  string s;
  cin >> s;

  set<char> chars;
  for(int i = 0; i < n ; i++)
  {
    chars.insert(s[i]);
  }
  vector<int> ans;

  for(auto &c : chars)
  {
    int l = 0, r = n-1;
    int count = 0;
    bool no = false;
    
    while(l <= r)
    {
      if(s[l] == s[r])
      {
        l++;
        r--;
      }
      else if(s[l] == c )
      {
        count++;
        l++;
      }
      else if(s[r] == c )
      {
        count++;
        r--;
      }
      else 
      {
        no = true;
        break;
      }
    }

    if(!no)
      ans.push_back(count);
  }

  if(ans.size())
    cout << *min_element(ans.begin(),ans.end()) << "\n";
  else cout << "-1\n";
}

return 0;
}
