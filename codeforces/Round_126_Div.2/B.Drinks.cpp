// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/200/B
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
std::cout << std::setprecision(12) << std::fixed;

long double n;
long double sum = 0;

cin >> n;
int p[int(n)];


for (int i = 0; i < n; i++)
{
  cin >> p[i];
  sum += p[i];
}

long double a = sum/n;
cout << a;


return 0;
}
