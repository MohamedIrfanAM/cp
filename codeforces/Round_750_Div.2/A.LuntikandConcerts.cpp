// time-limit: 1000
// problem-url: https://codeforces.com/contest/1582/problem/A
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t;
cin >> t;
while(t--)
{
  long long int a,b,c;
  cin >> a >> b >> c;

  if((a+(2*b) == 3*c))
  {
    cout << "0\n";
  }
  else
  {
    long long diff = 0;
    c = c%2;

    a -= c;
    b -= c;

    b = b%2;

    a -= 2*b;

    cout << abs(a)%2 << '\n';
  }

}



return 0;
}
