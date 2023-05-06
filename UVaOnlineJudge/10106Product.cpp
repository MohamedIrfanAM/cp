// time-limit: 3000
// problem-url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1047
#include<bits/stdc++.h>

using namespace std;

#define int            long long int
#define double         long double
#define pb             push_back
#define endl           "\n"
#define mod            1e9+7
#define all(p)         p.begin(), p.end()

#ifdef IRFAN_DEBUG
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) {cout << "\033[48;5;196m\033[38;5;15m" << name << " : " << arg1 << "\033[0m"<< endl;}
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr (names + 1, ',');
  cout << "\033[48;5;196m\033[38;5;15m";cout.write (names, comma - names) << " : " << arg1 << " | " << "\033[0m"; __f (comma + 1, args...);
}
#else
#define bug(...)
#endif


int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string s,s1,s2;
int i =1;
while(cin >> s)
{
  if(i == 1)
  {
    s1 = s;
    i++;
    continue;
  }
  i = 1;
  s2 = s;
  
  vector<vector<char>> mults;
  int max = -1;
  for(int j = s1.length()-1; j >= 0; j--)
  {
    int m = (int) s1[j] - 48;
    int rem = 0;
    vector<char> v;
    for(int k = s2.length()-1; k >=0; k--)
    {
      int m1 = s2[k] - 48;
      int ans = m1*m+rem;
      if(k != 0)
      {
        v.push_back(char((ans%10)+48));
        rem = ans/10;
      }
      else
      {
        while(ans > 0)
        {
          v.push_back(char((ans%10)+48));
          ans /= 10;
        }
        v.push_back('0');
      }
    }
    int lenth = v.size();
    if(lenth >= max )
    {
      max = v.size();
    }
    mults.push_back(v);
  }

  vector<char> ans;
  int rem = 0;

  for(int j = 0; j < max+mults.size(); j++)
  {
    int sum = rem;
    for(int k = 0; k < mults.size(); k++)
    {
      if((j-k) >= 0 && (j-k) <= mults[k].size()-1)
      {
        sum += mults[k][j-k]-48;
      }
    }

    if(j == (max+mults.size())-1)
    {
      while(sum > 0)
      {
        ans.push_back(char((sum%10)+48));
        sum /= 10;
      }
    }
    else
    {
      rem = sum/10;
      ans.push_back(char((sum%10)+48));
    }
  }

  for(auto it = ans.rbegin(); it != ans.rend(); it++)
  {
    if(it != ans.rbegin())
    {
      cout << *it;
    }
  }
  cout << "\n";
}

return 0;
}
