#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

  int valor, copy;
  int cem,cinquenta, vinte, dez, cinco,dois, um;
  cem = 0;
  cinquenta = 0;
  vinte = 0;
  dez = 0;
  cinco = 0;
  dois =0;
  um = 0;

  cin >> valor;
  copy = valor;
// cin >> valor;
    while(valor >=100) {
      valor-= 100;
      cem ++;
    }
  while(valor >= 50){
    valor -= 50;
    cinquenta++;
  }
  while (valor >= 20) {
    valor -=20;
    vinte++;
  }
  while (valor >= 10) {
    valor -=10;
    dez++;
  }
  while (valor >= 5) {
    valor -= 5;
    cinco++;
  }
  while (valor>=2) {
    valor -= 2;
    dois ++;
  }
  while (valor>=1) {
    valor -=1;
    um++;
  }

cout << copy << '\n';


cout << cem<< " nota(s) de R$ 100,00" << '\n';

cout<<cinquenta << " nota(s) de R$ 50,00" << '\n';

cout<< vinte << " nota(s) de R$ 20,00" << '\n';
cout<<dez<< " nota(s) de R$ 10,00"<<'\n';
cout<<cinco<< " nota(s) de R$ 5,00"<<'\n';
cout<<dois<< " nota(s) de R$ 2,00"<<'\n';
cout<<um<< " nota(s) de R$ 1,00"<<'\n';



    return 0;
}
