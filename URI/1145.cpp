#include "iostream"

using namespace std;

int main()
{
  int x, y, i;
  i = 1;
  std::cin >> x >> y;

  while (i <= y)
  {
    for (int j = 0; j < x; j++)
    {
      if (i <= y)
      {
        std::cout << i;
        i++;
      }
      if (i % x != 1)
      {
        std::cout << ' ';
      }
    }
    std::cout << '\n';
  }

  return 0;
}
