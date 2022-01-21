vector<int> factorial(int n,int M = 10e9+7)
{
  vector<int> fact(n+1);
  fact[0] = fact[1] = 1;
  for(int i = 2 ; i <= n; i++)
  {
    fact[i] = (1LL*(i%M)*(fact[i-1]%M))%M;
  }
  return fact;
}
