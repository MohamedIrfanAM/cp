// time-limit: 1000
// problem-url: https://www.codechef.com/START74D/problems/ODDEVENBS
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n;
  cin >> n;
  int even =0;
  int odd = 0;

  for(int i =0; i <n; i++)
  {
    int x;
    cin >> x;
    if(x == 1)
    {
      odd++;
    }
    else
    {
      even++;
    }
  }

  if(even%2 == 0)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }

}

return 0;
}
