// time-limit: 1000
// problem-url: https://codeforces.com/contest/1872/problem/C
#include<bits/stdc++.h>

using namespace std;

// #define int           long long int
#define double        long double
#define pb            push_back
#define endl          "\n"
#define all(p)        p.begin(), p.end()
const int mod=1e9+7;

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

vector<int> primes( int n ,int choice=1 )
{
  vector<int> prime_numbers;
  vector<int> highest_prime_factor(n+1,-1);
  vector<int> lowest_prime_factor(n+1,-1);
  vector<int> is_prime(n+1,1);
  is_prime[0] = is_prime [1] = 0;
  for(int i = 2; i <= n; i++)
  {
    if(is_prime[i])
    {
      prime_numbers.push_back(i);
      highest_prime_factor[i] = i;
      lowest_prime_factor[i] = i;
      for(int j = 2*i; j <= n; j+=i)
      {
        is_prime[j] = 0;
        highest_prime_factor[j] = i;
        if(lowest_prime_factor[j] == -1)
        {
          lowest_prime_factor[j] = i;
        }
      }
    }
  }

  switch(choice)
  {
    case 1: return prime_numbers; break;
    case 2: return highest_prime_factor; break;
    case 3: return lowest_prime_factor; break;
    case 4: return is_prime; break;
  }
}
vector<int> p = primes(10000007,1);
int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int l,r;cin >> l >> r;
  if(min(l,r) == 1 && max(l,r) >= 1 && max(l,r) <= 3){
    cout << "-1\n";
  }
  else if(min(l,r) == 2 && max(l,r) >= 2 && max(l,r) <= 3){
    cout << "-1\n";
  }
  else if((abs(l-r)) >= 2 || (l%2 == 0 && l != 2) || (r%2 == 0 && r != 2)) {
    for(int i = l; i <= r; i++){
      if(i%2 == 0 && i != 2) {cout << i/2 << " " << i/2 << endl; break;}
    }
  }
  else{
    bool found = false;
    for(int i = 0; p[i] <= r; i++)
    {
      if(r%p[i] == 0 && r != p[i]) {
        cout << p[i] << " " <<((r/p[i])-1)*p[i] << endl;
        found = true;
        break;
      }
    }
    if(!found) cout << "-1\n";
  }
}

return 0;
}
/*
     ______      __             ______                             
   _/      \_   |  \           /      \                            
  /   $$$$$$ \   \$$  ______  |  $$$$$$\ ______   _______          
 /  $$$____$$$\ |  \ /      \ | $$_  \$$|      \ |       \         
|  $$/     \ $$\| $$|  $$$$$$\| $$ \     \$$$$$$\| $$$$$$$\        
| $$|  $$$$$| $$| $$| $$   \$$| $$$$    /      $$| $$  | $$        
| $$| $$| $$| $$| $$| $$      | $$     |  $$$$$$$| $$  | $$        
| $$ \$$  $$| $$| $$| $$      | $$      \$$    $$| $$  | $$ ______ 
 \$$\ \$$$$$$$$  \$$ \$$       \$$       \$$$$$$$ \$$   \$$|      \
  \$$\ __/   \                                              \$$$$$$
   \$$$    $$$                                                     
     \$$$$$$ 
*/
