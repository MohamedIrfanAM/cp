// time-limit: 1000
// problem-url: https://codeforces.com/contest/1614/problem/B
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
  int a[n];
  int ac[n];
  int x[n];

  for(int i = 1; i <= n; i++)
  {
    cin >> a[i];
    ac[i] = a[i];
  }
  
  x[0] = n/2;


  float incre = 1.0;

  for(int i = 1; i <= n; i++)
  {

    int max = -100;
    int pos = -100;

    for(int j = 1; j <= n; j++)
    {
      if(ac[j] > max)
      {
        max = ac[j];
        pos = j;
      }
    }
   

    ac[pos] = -10;
    x[pos] = x[0] + pow(-1,i+1)*floor(incre);

    incre += 0.5;
  }

  long int T = 0;

  for(int i = 1; i <= n; i++)
  {
    
    T += 2 * abs(x[0] - x[i]) * a[i];
  }
  cout << T << "\n";

  for(int i = 0; i <= n; i++)
  {
    cout << x[i] << " " ;
  }
  cout << "\n";


}


return 0;
}
