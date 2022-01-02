// time-limit: 2000
// problem-url: https://codeforces.com/contest/1594/problem/B
#include<bits/stdc++.h>

using namespace std;

const long long  INF = 1e9+7;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long p = 1;
        long long ans = 0;
        for(int j = 0; j < 31; j++){
            if(k & (1<<j)){
                ans = (ans + p) % INF;
            }
            p *= n;
            p %= INF;
        }
        cout<<ans<<"\n";
    }
}

