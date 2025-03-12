vector<vector<int>> prime_factors(int n)
{
  vector<vector<int>> prime_factors(n + 1);
  vector<int> is_prime(n + 1, 1);
  is_prime[0] = is_prime[1] = 0;
  for (int i = 2; i <= n; i++)
  {
    if (is_prime[i])
    {
      prime_factors[i].push_back(1);
      prime_factors[i].push_back(i);
      for (int j = 2 * i; j <= n; j += i)
      {
        is_prime[j] = 0;
        prime_factors[j].push_back(i);
      }
    }
  }

  return prime_factors;
}
