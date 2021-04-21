// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/151/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n,k,l,c,d,p,nl,np;
cin >> n >> k >> l >> c >> d >> p >> nl >> np;

int ndrink = ((k*l)/nl)/n;
int nlime = ((d*c)/n);
int salt = (p/np)/n;

cout << min(min(ndrink,nlime),salt);

return 0;
}
