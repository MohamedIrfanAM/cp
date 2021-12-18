// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1581/A
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

long long int size = 200001;
long long int fact[size];

  fact[0] = 0;
  fact[1] = 0;
  fact[2] = 1;

  long long  M = 1000000007;
  for(long long i = 3; i < size; i++) // implicitly taking factorial/2
  {
    fact[i] = ((fact[i-1]%M)*(i%M))%M;
  }

long long tst;
cin >> tst;
while(tst--)
{


  long long n;
  cin >> n;
  int size_array = 2*n;
  cout << fact[size_array] << "\n";

}



return 0;
}
