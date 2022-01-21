vector<vector<int>> divisors (int n)
{
  vector<vector<int>> divisor(n+1,{1});;
  divisor[0][0] = -1;
  for(int i = 2; i <= n; i++)
  {
    for(int j = i; j <= n; j+=i)
    {
      divisor[j].push_back(i);
    }
  }
  return divisor;
}
