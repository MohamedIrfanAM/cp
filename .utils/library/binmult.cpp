int binmult(int a , int b)
{
  int ans = 0;
  int M = 1000000007;

  while(b > 0)
  {
    if(1&b)
    {
      ans = (ans+a)%M;
    }
    a = (a+a)%M;
    b >>= 1;
  }
  return ans;
}
