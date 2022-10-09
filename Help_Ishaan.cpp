public:
bool isPrime(int data)
{
     if (data < 2)
     {
          return false;
     }
     for (int i = 2; i <= sqrt(data); i++)
     {
          if (data % i == 0)
          {
               return false;
          }
     }
     return true;
}

int NthTerm(int N)
{
     // Code here
     int i = 0;
     while (i < N)
     {
          if (isPrime(N - i) || isPrime(N + i))
          {
               break;
          }
          i++;
     }
     return i;
}
}
;