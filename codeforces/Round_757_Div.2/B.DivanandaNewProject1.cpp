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
  double a[n+1];
  int x[n+1];

  for(int i = 1; i <= n; i++)
  {
    int temp;
    cin >> temp;
    
    a[i] = (double)temp+(double)i/10.0;
  }
  
  x[0] = n/2;
  a[0] = 0;

  sort(a+1,a+n+1);
  reverse(a+1,a+n+1);
  

  float incre = 1.0;

  for(int i = 1; i <= n; i++)
  {

    double pos = 10*(a[i] - int(a[i])) ;
    int position  = stoi(to_string(pos));


    x[position] = x[0]+ pow(-1,i+1)*floor(incre);

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
