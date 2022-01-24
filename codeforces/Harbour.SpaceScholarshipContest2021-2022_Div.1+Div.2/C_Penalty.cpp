// time-limit: 3000
// problem-url: https://codeforces.com/problemset/problem/1553/C
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
  string s;
  cin >> s;
  
  int sum1 = 0,sum2 = 0;
  int ans1 = 10;
  for(int i = 0; i < 10; i++)
  {
    if(i&1 && s[i] == '1')
    {
      sum2++;
    }
    else if(!(i&1) && s[i] != '0')
    {
      sum1++;
    }

    int remaining = 5 -(i/2);
    if(i&1) remaining--;

    if( sum1 > (remaining+sum2))
    {
      ans1= i+1;
      break;
    }
  }
  
  sum1 = 0,sum2 = 0;
  int ans2 = 10;
  for(int i = 0; i < 10; i++)
  {
    if(i&1 && s[i] != '0')
    {
      sum2++;
    }
    else if(!(i&1) && s[i] == '1')
    {
      sum1++;
    }

    int remaining = 5 -(i/2);
    if(i&1) remaining--;

    if(i&1 && sum2 > (remaining+sum1))
    {
      ans2= i+1;
      break;
    }
    else if(!(i&1))
    {
      if(sum2 > (remaining+sum1-1))
      {
        ans2= i+1;
        break;
      }
    }
  }

  cout << min(ans1,ans2) << "\n";

}

return 0;
}
