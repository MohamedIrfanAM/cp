long long int random(int min, int max){
  srand(time(0));
  return (rand()%(max-min+1))+min;
}
