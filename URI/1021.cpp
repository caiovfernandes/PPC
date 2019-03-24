#include <stdio.h>
#include <iostream>
//#include "bits/stdc++.h"

using namespace std;

int main(){

double valor;
std::cin >> valor;

int cem, cinquenta, vinte, dez, cinco, dois;
int um, cinquenta_cent, vinteeinco_cent, dez_cent, cinco_cent, um_cent;
cem =0;
cinquenta = 0;
vinte = 0;
dez = 0;
cinco = 0;
dois = 0;
um = 0;
cinquenta_cent = 0;
vinteeinco_cent = 0;
dez_cent = 0;
cinco_cent = 0;
um_cent = 0;

while (valor>=100.00) {
  valor-=100.0;
  cem++;
}
while (valor < 100 && valor >=50) {
  valor-=50.0;
  cinquenta++;
}
while (valor<50 && valor>=20) {
  valor-=20.0;
  vinte++;
}
while (valor<20 && valor>=10) {
  valor-=10.0;
  dez++;
}
while (valor< 10 && valor>=5) {
  valor-=5.0;
  cinco++;
}
while (valor<5 && valor>= 2) {
  valor-=2.0;
  dois++;
}
while (valor < 2.0 && valor>= 1.0) {
  valor-=1.0;
  um++;
}
while (valor<1.0 && valor >=0.5) {
  valor-=0.5;
  cinquenta_cent++;
}
while (valor<0.5 && valor>=0.25) {
  valor-=0.25;
  vinteeinco_cent++;
}
while (valor<0.25 && valor>=0.1) {
  valor-=0.1;
  dez_cent++;
}
while (valor < 0.1 && valor >= 0.05) {
  valor-=0.05;
  cinco_cent++;
}
while (valor<0.05 && valor >= 0 ) {
  valor-=0.01;
  um_cent++;
  if (valor == 0.0) {
    break;
  }
}
  /* code */

std::cout<< "NOTAS:\n";
std::cout<< cem << " nota(s) de R$100.00\n";
std::cout<< cinquenta << " nota(s) de R$50.00\n";
std::cout<< vinte<< " nota(s) de R$20.00\n" ;
std::cout<< dez << " nota(s) de R$10.00\n";
std::cout<< cinco << " nota(s) de R$5.00\n";
std::cout<< dois << " nota(s) de R$2.00\n";

std::cout<< "MOEDAS:\n";
std::cout<< um << " moeda(s) de R$1.00"<<'\n';
std::cout<< cinquenta_cent << " moeda(s) de R$0.50\n";
std::cout<< vinteeinco_cent << " moeda(s) de R$0.25\n";
std::cout<< dez_cent << " moeda(s) de R$0.10\n";
std::cout<< cinco_cent << " moeda(s) de R$0.05\n";
std::cout<< um_cent << " moeda(s) de R$0.01\n";
  return 0;

}
