// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1149/A
#include<bits/stdc++.h>

using namespace std;

#define int           long long int
#define double        long double
#define pb            push_back
#define endl          "\n"
#define all(p)        p.begin(), p.end()
const int mod=1e9+7;

#ifdef IRFAN_DEBUG
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) {cout << name << " : " << arg1 << endl;}
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr (names + 1, ',');
  cout.write (names, comma - names) << " : " << arg1 << " | " ; __f (comma + 1, args...);
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
    default: return prime_numbers;
  }
}
auto p = primes(4*1e6+100,1);
int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst = 1;
while(tst--)
{
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> a(n);
  int one = 0;
  int two = 0;
  for(int i = 0; i < n; i++)
  {
    int two;
    cin >> v[i];
    if(v[i] == 1)one++;
    else two++;
  }
  for(int i = 0; i<= n; i++){
    int z;
  }
  vector<int> x(100);
  int z = x[101];
  int done = 0;
  unsigned int sum = 0;
  for(int i = 0; i < n; i++) 
  {
    if(done > n){
      break;
    }
    while(sum < p[i]){
      if(sum+2 <= p[i] && two > 0){
        cout << 2 << " ";
        two--;
        done++;
        sum += 2;
      }
      else if(sum+1 <= p[i] && one > 0 ){
        cout << 1 << " ";
        one--;
        done++;
        sum += 1;
      }
      else{
        break;
      }
    }
  }
  while(two){
    cout << 2 << " ";
    two--;
  }
  while(one){
    cout << 1 << " ";
    one--;
  }
  cout << endl;
  
   
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
