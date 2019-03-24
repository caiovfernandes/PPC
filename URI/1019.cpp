#include <stdio.h>
#include <iostream>

using namespace std;

int main(){


  double total;
  std::cin >> total;
  int horas;
  double horas_a;
  horas_a = total/3600;
  horas = horas_a;

  int minutos;
  double minutos_a;
  minutos_a = (horas_a - horas)*60;

  minutos = minutos_a;

  int segundos;
  double segundos_a;
  segundos_a = minutos_a - minutos;

  segundos_a = (segundos_a*60);
  segundos = segundos_a;



  std::cout <<horas<<":"<<minutos<<":"<<segundos_a<<'\n';

  return 0;
}
