vector<int> prime_factors( int n )
{
  vector<int> prime_factor;
  int n1 = n;
  for(int i = 2; i*i <= n1; i++)
  {
    while(n%i == 0)
    {
      prime_factor.push_back(i); 
      n /= i;
    }
    if(n == 1)
    {
      break;
    }
  }
  if(n != 1)
  {
    prime_factor.push_back(n);
  }
  return prime_factor;
}
