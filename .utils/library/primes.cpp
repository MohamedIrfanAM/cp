vector<int> primes( int n ,int choice=1 )
{
  vector<int> prime_numbers;
  vector<int> highest_prime_factor(n+1,-1);
  vector<int> lowest_prime_factor(n+1,-1);
  vector<int> is_prime(n+1,1);
  is_prime[0] = is_prime [1] = 0;
  for(int i = 2; i <= n; i++)
  {
    if(is_prime[i])
    {
      prime_numbers.push_back(i);
      highest_prime_factor[i] = i;
      lowest_prime_factor[i] = i;
      for(int j = 2*i; j <= n; j+=i)
      {
        is_prime[j] = 0;
        highest_prime_factor[j] = i;
        if(lowest_prime_factor[j] == -1)
        {
          lowest_prime_factor[j] = i;
        }
      }
    }
  }

  switch(choice)
  {
    case 1: return prime_numbers; break;
    case 2: return highest_prime_factor; break;
    case 3: return lowest_prime_factor; break;
    case 4: return is_prime; break;
  }
}
