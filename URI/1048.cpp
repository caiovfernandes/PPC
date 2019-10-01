#include <stdio.h>
#include <iostream>
#include <iomanip>
//#include <bits/stdc++.h>

using namespace std;

int main()
{

  double salario, salario_new, readjustment;
  scanf("%lf", &salario);
  double r1, r2, r3, r4, r5, rf;
  r1 = 1.150;
  r2 = 1.120;
  r3 = 1.10;
  r4 = 1.070;
  r5 = 1.040;
  char ch = '%';

  if (salario >= 0 && salario <= 400.00)
  {
    salario_new = salario * r1;
    readjustment = salario_new - salario;
    rf = 15;
  }
  else if (salario >= 400.01 && salario <= 800.00)
  {
    salario_new = salario * r2;
    readjustment = salario_new - salario;
    rf = 12;
  }
  else if (salario >= 800.01 && salario <= 1200.00)
  {
    salario_new = salario * r3;
    readjustment = salario_new - salario;
    rf = 10;
  }
  else if (salario >= 1200.01 && salario <= 2000.00)
  {
    salario_new = salario * r4;
    readjustment = salario_new - salario;
    rf = 7;
  }
  else if (salario > 2000.00)
  {
    salario_new = salario * r5;
    readjustment = salario_new - salario;
    rf = 4;
  }

  printf("Novo salario: %.2lf\n", salario_new);
  printf("Reajuste ganho: %.2lf\n", readjustment);
  printf("Em percentual: %.lf %c\n", rf, ch);

  return 0;
}
