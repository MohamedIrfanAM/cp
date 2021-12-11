// time-limit: 1000
// problem-url: https://codeforces.com/contest/1608/problem/C
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
  long long  n;
  cin >> n;
  unsigned long long int a[n],b[n];

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++)
  {
    cin >> b[i];
  }

  for(int i = 0; i < n; i++)
  {
    long int c = a[i];
    long int d = b[i];
    long int n1 = 0;
    long int n2 = 0;
    long int max1 = a[i];
    long int max2 = b[i];
    vector<int> pow;
    
    for(int j = 0; j < n; j++)
    {
      if(c > a[j] || d > b[j])
      {
        n1++;
        if(a[j] > max1)
        {
          max1 = b[j];
        }
        if(b[j] > max2)
        {
          max2 = b[j];
        }
      }
      else if(c < a[j] || d < b[j])
      {
        pow.push_back(j);
      }

    }

    for(int k:pow)
    {
      if(max1 > a[k] || max2 > b[k])
      {
        n2++;
      }
    }

    if((n1+n2) >= n-1)    
    {
      cout << 1;
    }
    else
    {
      cout << 0;
    }
  }
  cout << "\n";
}



return 0;
}
