long long int random(long long int min, long long int max){
  srand(time(0));
  return (rand()%(max-min+1))+min;
}
