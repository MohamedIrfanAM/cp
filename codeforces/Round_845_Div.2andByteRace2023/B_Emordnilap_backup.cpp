// time-limit: 1000
// problem-url: https://codeforces.com/contest/1777/problem/B
#include<bits/stdc++.h>

using namespace std;

#define int            long long int
// #define double         long double
// #define pb             push_back
// #define endl           "\n"
// #define sz(x)          ((int) x.size())
// #define all(p)         p.begin(), p.end()
//
// #ifdef IRFAN_DEBUG
// #define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
// template <typename Arg1>
// void __f (const char* name, Arg1&& arg1) {cout << "\033[48;5;196m\033[38;5;15m" << name << " : " << arg1 << "\033[0m"<< endl;}
// template <typename Arg1, typename... Args>
// void __f (const char* names, Arg1&& arg1, Args&&... args){
//   const char* comma = strchr (names + 1, ',');
//   cout << "\033[48;5;196m\033[38;5;15m";cout.write (names, comma - names) << " : " << arg1 << " | " << "\033[0m"; __f (comma + 1, args...);
// }
// #else
// #define bug(...)
// #endif

// vector<int> factorial(int n,int M = 10e9+7)
// {
//   vector<int> fact(n+1);
//   fact[1] = 1;
//   fact[0] = 1;
//   for(int i = 2 ; i <= n; i++)
//   {
//     fact[i] = fact[i-1]*i;
//     fact[i]%=M;
//   }
//   return fact;
// }

// vector<int>f = factorial(10e5+5);    
int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


    const int N = 10e5 + 5;
    const int mod = 10e9 + 7;
    vector<int> fact(N);
    fact[0] = 1;
    for(int i = 1; i < N; i++)
    {
        fact[i] = fact[i-1] * i;
        fact[i] %= mod;
    }


int tst;
cin >> tst;
while(tst--)
{
        int n;
        cin >> n;
        int ans = n * (n - 1);
        ans %= mod;
        ans = (ans * fact[n]) % mod;
        cout << ans << endl;}

return 0;
}

