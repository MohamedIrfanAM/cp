// time-limit: 3000
// problem-url: https://codeforces.com/problemset/problem/1612/A
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
  int a,b;
  cin >> a >> b ;

  if( (a+b)%2 != 0)
  {
    cout << "-1 -1\n";
  }
  else
  {
    int d = (a+b)/2;
    int p,q;

    for(int i = 0; i <= d; i++)
    {
      p = i;
      q = d-i;

      if((abs(p-a)+abs(q-b)) == d)
      {
        cout << p << ' ' << q << "\n";
        break;
      }
    }
    

  }

}


return 0;
}
