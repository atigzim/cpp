#include <iostream>
#include <string>

int main(int ac, char **av) {

  int i;
  int j;

  i = 1;
  if (ac == 1)
    std :: cout << "LOUD AND UNBEARABLE FEEDBACK NOISE";
  else
  {
    while (av[i])
    {
      j = 0;
      while(av[i][j])
      {
        std :: cout <<(char) toupper(av[i][j]);
        j++;
      }
      std :: cout << " ";
      i++;
    }
   std :: cout << "\n";
  }
  return 0;
}