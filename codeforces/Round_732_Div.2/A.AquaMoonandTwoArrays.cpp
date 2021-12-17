// time-limit: 1000
// problem-url: https://codeforces.com/contest/1546/problem/A
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
  int n;
  cin >> n;
  int a[n],b[n];
  int diff = 0;
  int diffmax = 0;
  
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
    diff += b[i] - a[i];
    if(b[i] - a[i] > 0)
    {
      diffmax += b[i] - a[i];
    }
  }
  

  if(diff != 0)
  {
    cout << "-1\n";
    continue;
  }
  
  cout << diffmax << "\n";
  if(diffmax == 0)
  {
    continue;
  }
  for(int i = 0; i < n; i++) 
  {
      if(b[i] - a[i] < 0)
      {
        for(int j = i+1; j < n; j++)
        {
          int temp = b[j] - a[j];
          if(temp > 0)
          {

            for(int k = 1; k <= temp ; k++)
            {
              a[i] -= 1;
              a[j] += 1;
              cout << i+1 << " " << j+1 << "\n";
              if(a[i] == b[i] || b[j] == a[j])
              {
                break;
              }
            }
          }
          if(a[i] == b[i])
          {
            break;
          }
        }
      }
      else if(b[i] - a[i] > 0)
      {
        for(int j = i+1; j < n; j++)
        {
          int temp = a[j] - b[j];
          if(b[j] - a[j] < 0)
          {

            for(int k = 0; k < temp ; k++)
            {
              a[i] += 1;
              a[j] -= 1;
              cout << j+1 << " " << i+1 << "\n";
              if(a[i] == b[i] || b[j] == a[j])
              {
                break;
              }
            }
          }
          if(a[i] == b[i])
          {
            break;
          }
        }
      }
  }

  

}



return 0;
}
