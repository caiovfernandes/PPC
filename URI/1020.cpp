#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

  int valor;
  std::cin >> valor;

  int ano=0;
  int mes = 0;
  int dia = 0;


  while (valor >= 365) {
    valor-=365;
    ano++;
  }

  while (valor >=30 && valor < 365) {
    valor -= 30;
    mes++;
  }
  while (valor < 30 && valor > 0) {
    valor-=1;
    dia++;
  }

  std::cout << ano << " ano(s)" << '\n'<<mes<<" mes(es)"<<'\n'<<dia<<" dia(s)"<<'\n';

  return 0;
}
