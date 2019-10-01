#include "iostream"

using namespace std;

int main(){

  int DDD;
  std::cin >> DDD;

  if (DDD== 61 || DDD==71 || DDD== 11 || DDD== 21 || DDD== 32 || DDD== 19 || DDD== 27 || DDD== 31) {
    if (DDD==61) {
      std::cout << "Brasilia" << '\n';
    }
    else if (DDD == 71) {
      std::cout << "Salvador" << '\n';
    }
    else if (DDD==11) {
      std::cout << "Sao Paulo" << '\n';
    }
    else if (DDD==21) {
      std::cout << "Rio de Janeiro" << '\n';
    }
    else if (DDD==32) {
      std::cout << "Juiz de Fora" << '\n';
    }
    else if (DDD==19) {
      std::cout << "Campinas" << '\n';
    }
    else if (DDD==27) {
      std::cout << "Vitoria" << '\n';
    }
    else if (DDD==31) {
      std::cout << "Belo Horizonto" << '\n';
    }
  }
  else{
    std::cout << "DDD nao cadastrado" << '\n';
  }

  return 0;
}
